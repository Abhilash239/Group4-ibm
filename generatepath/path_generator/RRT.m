function  RRT(trailer1PosX,trailer1PosZ,trailer2PosX,trailer2PosZ, goal_pos_truck_number, obstaclePosX,obstaclePosY)
% function [x_pos,y_pos,angle,direc,path_reverse] = RRT(num)
% clear all
% 
% trailer1PosX = (12.1683);
% trailer1PosZ = (14.5508);
% trailer2PosX = (12.1683);
% trailer2PosZ = (17.3479);


x2n = abs(trailer1PosX-39);
y2n = trailer1PosZ+25.8;
x3n = abs(trailer2PosX-39);
y3n = trailer2PosZ+25.8;

angle= atan((y2n-y3n)/(x2n-x3n));
angle = angle*180/pi;
x = x3n -(2.025*cosd(angle));
y = y3n - (2.025*sind(angle));


S1 = [x*10 y*10 angle]; %  [x-position y-position  angle  ]
% goal_pos_truck_number=4;
E1 = goal_pos_truck_number; %  Dock number. Type:integer

% obstacle = [obstaclePosX obstaclePosY]; %Array containing the locations of all the obtacles. Example shown below.
% obstacle = [-10 -5];
obstacle = [obstaclePosX obstaclePosY];
% 
if E1<=10
    num =1;% if truck is going from parking to  docking then send value 1. For other case send any integer
end
edge = Map(obstacle,num);

costmap = vehicleCostmap(edge,'FreeThreshold',0.4);
vehicleDims = vehicleDimensions(124,19,'Wheelbase',62,'RearOverhang',29); 
NumCircles = 5;
ccConfig = inflationCollisionChecker(vehicleDims,'InflationRadius',10,'CenterPlacements',[0,0.1,0.5,0.9,1],'NumCircles',NumCircles);
costmap.CollisionChecker = ccConfig;
% figure(8)
% plot(ccConfig)

% 
route = load('park_dock_points.mat');
routePlan = route.routePlan;

dock_number = E1;
park = S1;

% park = parking(park_number);

routePlan.StartPose(1,1) = park(1);
routePlan.StartPose(1,2) = park(2);
routePlan.StartPose(1,3) = park(3);


goal = docking(dock_number);
SP = HAS(goal,obstacle,num);

l=3;  % Number of wavepoints 

routePlan.EndPose(l,1) = SP(1);
routePlan.EndPose(l,2) = SP(2);
routePlan.EndPose(l,3) = SP(3);

routePlan.StartPose(l+1,1) = SP(1);
routePlan.StartPose(l+1,2) = SP(2);
routePlan.StartPose(l+1,3) = SP(3);





routePlan.EndPose(l+2,1) = goal(1);
routePlan.EndPose(l+2,2) = goal(2) + 30 ;
routePlan.EndPose(l+2,3) = goal(3);

% % Striaght Path
routePlan.StartPose(l+3,1) = goal(1);
routePlan.StartPose(l+3,2) = goal(2)+ 30 ;
routePlan.StartPose(l+3,3) = goal(3);
routePlan.EndPose(l+3,1) = goal(1) ;
routePlan.EndPose(l+3,2) = goal(2)+ 100;
routePlan.EndPose(l+3,3) = goal(3);        


display(routePlan);


% helperPlotVehicle(routePlan{1, 'StartPose'}, vehicleDims, 'DisplayName', 'Current Pose')
% legend
current_pos = [(390-(obstacle(2)*10)) (258 +(obstacle(1)*10))];
j=0;
for i = 1:l+2
    if i <= l+1
        goalPose = routePlan{i, 'EndPose'};
        if norm(current_pos - [goalPose(1) goalPose(2)]) > 50
            currentPose = routePlan{i-j, 'StartPose'};
%             vehiclePose = routePlan{i, 'EndPose'};
%             legendEntry = sprintf('Goal %i', i);
%             helperPlotVehicle(vehiclePose, vehicleDims, 'DisplayName', legendEntry);           
            fprintf('Segment %d\n',i)
            foundpath = false;
            count = 0;
            gb = 0.8 ; % default goal bias
            while ~foundpath
          
                    motionPlanner = pathPlannerRRT(costmap,'MinTurningRadius',57,'MinIterations', 1000,'ApproximateSearch',false,'GoalBias',gb,'GoalTolerance',[0.01,0.01,0.1],'ConnectionDistance', 10);
                    refPath = plan(motionPlanner, currentPose, goalPose);
                    foundpath = true;
                    if refPath.Length == 0
                        foundpath = false;
                        gb = gb ;
                        disp('Dubins method failed to compute path. Retrying...')
                        count = count+1;
                    end

                    
%                 else 
%                     motionPlanner = pathPlannerRRT(costmap,'MinTurningRadius',57,'ConnectionMethod','Reeds-Shepp','MinIterations', 1000,'ApproximateSearch',false,'GoalBias',0.8,'GoalTolerance',[0.01,0.01,0.1],...
%                                                     'ConnectionDistance', 5);
%                     refPath = plan(motionPlanner, currentPose, goalPose);
%                     foundpath = true;
%                     if refPath.Length == 0
%                         foundpath = false;
%                         gb = gb - 0.1;
%                         disp('Reeds-Shepp method failed to compute path. Retrying...')
%                         count = count+1;
%                     end
%                     if count > 7
%                         fprintf('Path was not found using both methods. In segment %d\n',i)
%                         break
%                     end
%                 end
            end
           
             [transitionPoses, directions] = interpolate(refPath);
             approxSeparation = 0.1; % meters
             numSmoothPoses   = round(refPath.Length / approxSeparation);
             [transitionPoses, directions, cumLengths, curvatures] = smoothPathSpline(transitionPoses, directions, numSmoothPoses);
             path_dir = [transitionPoses directions];
             if i-j==1
                final = path_dir;
                j=0;
             else
                final = cat(1,final,path_dir);   
             end
        else % this is for norm condition
            j=1;
            fprintf('Segment %d skipped\n',i);
        end
    % From Switch Point
    if i == l
   
    temp = final(end,:); 
    temp1 = final(end-1,:);
    slope = atan((temp(2)-temp1(2))/(temp(1)-temp1(1)))*180/pi;
    
    
    
    newsp(1) = temp(1)- (50*(cosd(slope)));
    newsp(2) = temp(2)- (50*(sind(slope)));
    newsp(3) = 180 + slope;
%     temp = final(end,:);
%     newsp(1) = temp(1)- (50*(cosd(temp(3)-180)));
%     newsp(2) = temp(2)- (50*(sind(temp(3)-180)));
%     newsp(3) = temp(3);
    
    
    routePlan.EndPose(l+1,1) = newsp(1);
    routePlan.EndPose(l+1,2) = newsp(2);
    routePlan.EndPose(l+1,3) = newsp(3);

    routePlan.StartPose(l+2,1) = newsp(1);
    routePlan.StartPose(l+2,2) = newsp(2);
    routePlan.StartPose(l+2,3) = newsp(3)-180;
    
%     routePlan.EndPose(l+2,1) = temp(1);
%     routePlan.EndPose(l+2,2) = temp(2);
%     routePlan.EndPose(l+2,3) = temp(3);
% 
%     routePlan.StartPose(l+3,1) = temp(1);
%     routePlan.StartPose(l+3,2) = temp(2);
%     routePlan.StartPose(l+3,3) = temp(3); 
%     
    
    
    
    end
    else
 
        fprintf('Segment %d\n',i)%         vehiclePose = routePlan{i, 'EndPose'};
%         legendEntry = sprintf('Goal %i', i);
%         helperPlotVehicle(vehiclePose, vehicleDims, 'DisplayName', legendEntry);    

        foundpath = false;
        gb = 0.8 ; % default goal bias
        while ~foundpath
            currentPose = routePlan{i, 'StartPose'};
            goalPose = routePlan{i, 'EndPose'};

            goalPose(3) = 180-goalPose(3);
             motionPlanner = pathPlannerRRT(costmap,'MinTurningRadius',57,'MinIterations', 1000,'ApproximateSearch',false,'GoalBias',gb,'GoalTolerance',[0.01,0.01,0.1],'ConnectionDistance', 10);
%             motionPlanner = pathPlannerRRT(costmap,'MinTurningRadius',57,'MinIterations', 1000,'ConnectionMethod','Reeds-Shepp','ApproximateSearch',false,'GoalBias',gb,'GoalTolerance',[0.01,0.01,0.1],'ConnectionDistance', 10);
            refPath = plan(motionPlanner, currentPose, goalPose);
            foundpath = true;
            if refPath.Length == 0
                foundpath = false;
                gb = gb;
                disp('Path was not computed. Retrying...')
                count = count+1;
            end


        end
        [transitionPoses, directions] = interpolate(refPath);
        approxSeparation = 0.05; % meters
        numSmoothPoses   = round(refPath.Length / approxSeparation);
        [transitionPoses, directions, cumLengths, curvatures] = smoothPathSpline(transitionPoses, directions, numSmoothPoses);
        path_dir = [transitionPoses directions];
        if i==l+2
               indexswitch = length(final)+1;
               finalref = path_dir;
               finalref(:,3) = finalref(:,3) + 180;
               final = cat(1,final,finalref);


        else
        finalref = path_dir; 
        finalref(:,3) = finalref(:,3) + 180;
        final = cat(1,final,finalref);
        end  
        
    end
  
end



fprintf('Segment %d\n',6)
 foundpath = false;
 gb = 0.8 ; % default goal bias
 while ~foundpath
            currentPose = routePlan{6, 'StartPose'};
            goalPose = routePlan{6, 'EndPose'};
            currentPose(3) = -currentPose(3);
            goalPose(3) = -goalPose(3);
%              motionPlanner = pathPlannerRRT(costmap,'MinTurningRadius',57,'MinIterations', 1000,'ApproximateSearch',false,'GoalBias',gb,'GoalTolerance',[0.01,0.01,0.1],'ConnectionDistance', 10);
            motionPlanner = pathPlannerRRT(costmap,'MinTurningRadius',57,'MinIterations', 1000,'ConnectionMethod','Reeds-Shepp','ApproximateSearch',false,'GoalBias',gb,'GoalTolerance',[0.01,0.01,0.1],'ConnectionDistance', 10);
            refPath = plan(motionPlanner, currentPose, goalPose);
            foundpath = true;
            if refPath.Length == 0
                foundpath = false;
                gb = gb;
                disp('Path was not computed. Retrying...')
                count = count+1;
            end


        end
        [transitionPoses, directions] = interpolate(refPath);
        approxSeparation = 0.1; % meters
        numSmoothPoses   = round(refPath.Length / approxSeparation);
        [transitionPoses, directions, cumLengths, curvatures] = smoothPathSpline(transitionPoses, directions, numSmoothPoses);
        path_dir = [transitionPoses directions];
        final = cat(1,final,path_dir);  

figure(3)
plot(costmap)
hold on
plot(final(:, 1), final(:, 2), 'r', 'LineWidth', 2, ...
    'DisplayName', 'Smoothed Path');
hold off

path_forward = final;
% path_reverse = final_reverse;



x_pos = (390-path_forward(:,1))/10; % x_pos is z  in unity
x_pos = -x_pos + 39;
y_pos = (path_forward(:,2)-258)/10; % y_pos is x in unity
y_pos = y_pos + 25.8;
angle = path_forward(:,3);
direction = path_forward(:,4);
changedIndexes = diff(direction)~=0;
% speedref = find(changedIndexes==1);



xp1 = [linspace(0,0,indexswitch-1)'; x_pos(indexswitch:end)];
yp1 = [linspace(0,0,indexswitch-1)'; y_pos(indexswitch:end)];



angle1 = angle;
change = 0;
for ii=1:length(angle1)
    if ii == 1
        angle(ii)=angle1(ii);
        
    else
        if abs(angle1(ii)-angle1(ii-1))>10
            change = change+1;
        end
        
        if mod(change, 2) == 1
            angle(ii)=angle1(ii)-360;
            
        else if mod(change,2) == 0
                angle(ii) = angle1(ii);
            end
        end
    end
end

angle = angle/180*pi;
angle1 = [linspace(0,0,indexswitch-1)'; angle(indexswitch:end)];
save('x_pos.mat','x_pos')
save('y_pos.mat','y_pos')
save('angle.mat','angle')
save('xp1.mat','xp1')
save('yp1.mat','yp1')
save('angle1.mat','angle1')
save('indexswitch.mat','indexswitch')

end  


% %% 

%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% Coming Back from docking to Parking
% 
%% 
% route_back = (routePlan);
% 
% 
% 
% bl=2;  % Number of wavepoints 
% route_back.StartPose(1,:) = routePlan.EndPose(l+2,:);
% route_back.EndPose(1,:) = routePlan.StartPose(l+2,:);
% 
% route_back.StartPose(bl,:) = route_back.EndPose(1,:)
% route_back.EndPose(bl,1) = 100;
% route_back.EndPose(bl,2) = 210;
% route_back.EndPose(bl,3) = -120;
% 
% route_back.StartPose(bl+1,1) = 100;
% route_back.StartPose(bl+1,2) = 210;
% route_back.StartPose(bl+1,3) = -120;
% route_back.EndPose(bl+1,1) = 100;
% route_back.EndPose(bl+1,2) = 60;
% route_back.EndPose(bl+1,3) = 0; 
% 
% route_back.StartPose(bl+2,1) = 100;
% route_back.StartPose(bl+2,2) = 60;
% route_back.StartPose(bl+2,3) = 0;
% route_back.EndPose(bl+2,1) = park(1);
% route_back.EndPose(bl+2,2) = park(2);
% route_back.EndPose(bl+2,3) = park(3); 
% 
% figure(4);
% plot(costmap)
% hold on
% helperPlotVehicle(route_back{1, 'StartPose'}, vehicleDims, 'DisplayName', 'Current Pose')
% legend
% 
% for i = 1:bl+2
%         
%     if i <= bl+1
%         count =i
%         currentPose = route_back{i, 'StartPose'};
%         goalPose = route_back{i, 'EndPose'};
%         motionPlanner = pathPlannerRRT(costmap,'MinTurningRadius',57,'MinIterations', 1000,'ApproximateSearch',false,'GoalBias',0.8,'GoalTolerance',[0.01,0.01,0.01],'ConnectionDistance', 5);
%         refPath = plan(motionPlanner, currentPose, goalPose);
%  
%     else
%         count =i
%         currentPose = route_back{i, 'StartPose'};
%         goalPose = route_back{i, 'EndPose'};
%         motionPlanner = pathPlannerRRT(costmap,'MinTurningRadius',57,'MinIterations', 1000,'ConnectionMethod','Reeds-Shepp','ApproximateSearch',false,'GoalBias',0.8,'GoalTolerance',[0.01,0.01,0.01],'ConnectionDistance', 5);
%         refPath = plan(motionPlanner, currentPose, goalPose);
%     end
% 
%     
%  
%     [transitionPoses, directions] = interpolate(refPath);
%     approxSeparation = 0.1; % meters
%     numSmoothPoses   = round(refPath.Length / approxSeparation);
%     [refPoses, directions, cumLengths, curvatures] = smoothPathSpline(transitionPoses, directions, numSmoothPoses);
%     path_dir = [refPoses directions];
%     if i==1
%         final_back = path_dir;
% 
%     else
%         final_back = cat(1,final_back,path_dir);
%         
%     end
% end
%     
% 
% for n = 1 : bl+2
% 
%         vehiclePose = route_back{n, 'EndPose'};
%         legendEntry = sprintf('Goal %i', n);
%         helperPlotVehicle(vehiclePose, vehicleDims, 'DisplayName', legendEntry);
% 
% 
%     
% end
% 
% 
% hSmoothPath = plot(final_back(:, 1), final_back(:, 2), 'r', 'LineWidth', 2, ...
%     'DisplayName', 'Smoothed Path');
% hold off
% 
% 
% 
% 
% 
% 
%% 
% % %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% 
% obstacle = [7.5 -5];
% edge = Map(obstacle);
% costmap = vehicleCostmap(edge,'FreeThreshold',0.4);
% 
% vehicleDims = vehicleDimensions(124,19,'Wheelbase',62,'FrontOverhang',38.2,'RearOverhang',29);  % 4.5 m long, 1.7 m wide
% NumCircles = 7;
% ccConfig = inflationCollisionChecker(vehicleDims,'InflationRadius',10,'CenterPlacements',[0,0.1,0.25,0.5,0.75,0.9,1],'NumCircles',NumCircles);
% costmap.CollisionChecker = ccConfig;
% figure(2)
% plot(ccConfig)
% 
% % startPose = [370, 90, 42]; % [meters, meters, degrees]
% % % goalPose  = [630, 210, 90];
% startPose = [340, 60, 42]; % [meters, meters, degrees]
% goalPose  = [460 170 0];
% % startPose = [460, 170, 0]; % [meters, meters, degrees]
% % goalPose  = [630, 150, 90];
% % startPose = [630, 150, 90]; % [meters, meters, degrees]
% % goalPose  = [630, 250, 90];
% % startPose = [630, 200, 90]; % [meters, meters, degrees]
% % goalPose  = [199, 256, 180];
% planner = pathPlannerRRT(costmap,'MinTurningRadius',57,'MinIterations', 1000,'ConnectionMethod','Reeds-Shepp','ApproximateSearch',false, 'GoalTolerance',[0.01,0.01,0.1],'ConnectionDistance', 5,'GoalBias',0.4);
% 
% [refPath,tree] = plan(planner,startPose,goalPose);
% 
% figure(3)
% plot(costmap)
% hold on 
% plot(refPath)
% 
% hold off
% figure(4)
% plot(planner)



%%%%%%%%%%%%%%%%%%%%%%%%%%
% planner = HelperBehavioralPlanner(routepath, 57);
% transitionPoses = interpolate(refPath);
% reversepath = load('reversepath.mat') ;
% reversepath = reversepath.Trailer_axle_2_tr;
% reverse(:,1) = 600-flip(reversepath(:,2));
% reverse(:,2) = 457-flip(reversepath(:,1));
% reverse(:,3) = reversepath(:,3);

% reversepath = load('reversepath.mat') ;
% reversepath = reversepath.Trailer_axle_2_tr;
% reverse(:,1) = 600-(reversepath(:,2));
% reverse(:,2) = 457-(reversepath(:,1));
% reverse(:,3) = reversepath(:,3);
% 
% final = cat(1,final,reverse);
%

% % figure(2)
% % plot(costmap, 'Inflation', 'off')
% % hold on
% % plot(refPath,'DisplayName','Planned Path')
% % scatter(transitionPoses(:,1),transitionPoses(:,2),[],'filled','DisplayName','Transition Poses')
% % hold off
% 
%     if numSmoothPoses < 4000
%         disp('entered');
%         foundpath = false;
%         while ~foundpath
%             disp('finding path');
%             currentPose = routePlan{i, 'StartPose'};
%             goalPose = routePlan{i, 'EndPose'};
%             motionPlanner = pathPlannerRRT(costmap,'MinTurningRadius',57,'MinIterations', 1000,'ConnectionMethod','Reeds-Shepp','ApproximateSearch',false,'GoalBias',0.4,'GoalTolerance',[0.1,0.1,0.1],'ConnectionDistance', 5);
%             refPath = plan(motionPlanner, currentPose, goalPose);
%             foundpath = true;
%             if isempty(refPath.Length) == 1
%                 foundpath = false;
%                 disp('Path was not found. Retrying...')
%             end
%         end
%         [transitionPoses, directions] = interpolate(refPath);
%         approxSeparation = 0.1; % meters
%         numSmoothPoses   = round(refPath.Length / approxSeparation);
%     end

%% %% 
%     save('park_dock_points.mat','routePlan')%'ConnectionMethod','Reeds-Shepp'
