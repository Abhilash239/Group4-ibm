

% % %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% data = load('costmap1.mat');
% costmap = data.costmap;
% vehicleDims = vehicleDimensions(98.5,19,'Wheelbase',62,'FrontOverhang',7.5,'RearOverhang',29);  % 4.5 m long, 1.7 m wide
% NumCircles = 3;
% ccConfig = inflationCollisionChecker(vehicleDims,'InflationRadius',1,'CenterPlacements',[0,0.5,1],'NumCircles',NumCircles);
% costmap.CollisionChecker = ccConfig;
% % 
% startPose = [110, 210, -130]; % [meters, meters, degrees]
% goalPose  = [100, 60, 5];
% % startPose = [100, 60, 0]; % [meters, meters, degrees]
% % goalPose  = [180, 90, 42];
% % % startPose = [460, 170, 0]; % [meters, meters, degrees]
% % % goalPose  = [630, 150, 90];
% % % startPose = [630, 150, 90]; % [meters, meters, degrees]
% % % goalPose  = [630, 250, 90];
% % startPose = [630, 200, 90]; % [meters, meters, degrees]
% % goalPose  = [199, 256, 180];
% planner = pathPlannerRRT(costmap,'MinTurningRadius',57,'MinIterations', 1000,'ApproximateSearch',false, 'GoalTolerance',[0.01,0.01,0.1],'ConnectionDistance', 15,'GoalBias',0.8);
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


%% 
%     save('park_dock_points.mat','routePlan')%'ConnectionMethod','Reeds-Shepp'

%%  clean start according to example

clc 
clear all
obstacle = [0 0];
edge = Map(obstacle);
costmap = vehicleCostmap(edge,'FreeThreshold',0.4);
 
vehicleDims = vehicleDimensions(98.5,19,'Wheelbase',62,'FrontOverhang',7.5,'RearOverhang',29);  % 4.5 m long, 1.7 m wide
NumCircles = 3;
ccConfig = inflationCollisionChecker(vehicleDims,'InflationRadius',5,'CenterPlacements',[0,0.5,1],'NumCircles',NumCircles);
costmap.CollisionChecker = ccConfig;

route = load('park_dock_points.mat')
routePlan = route.routePlan

dock_number = 4;
park_number = 1;

park = parking(park_number);
routePlan.StartPose(1,1) = park(1);
routePlan.StartPose(1,2) = park(2);
routePlan.StartPose(1,3) = park(3);


goal = docking(dock_number);
SP = HAS(goal,obstacle);

l=2;  % Number of wavepoints 

routePlan.EndPose(l,1) = SP(1);
routePlan.EndPose(l,2) = SP(2);
routePlan.EndPose(l,3) = SP(3);

routePlan.StartPose(l+1,1) = SP(1);
routePlan.StartPose(l+1,2) = SP(2);
routePlan.StartPose(l+1,3) = SP(3);
routePlan.EndPose(l+1,1) = goal(1);
routePlan.EndPose(l+1,2) = goal(2);
routePlan.EndPose(l+1,3) = goal(3);

% Striaght Path
routePlan.StartPose(l+2,1) = goal(1);
routePlan.StartPose(l+2,2) = goal(2);
routePlan.StartPose(l+2,3) = goal(3);
routePlan.EndPose(l+2,1) = goal(1);
routePlan.EndPose(l+2,2) = goal(2)+75;
routePlan.EndPose(l+2,3) = goal(3);        



figure(3)
plot(costmap)
hold on
helperPlotVehicle(routePlan{1, 'StartPose'}, vehicleDims, 'DisplayName', 'Current Pose')
legend

for i = 1:l+2
    if i <= l
        count =i
        currentPose = routePlan{i, 'StartPose'};
        goalPose = routePlan{i, 'EndPose'};
        motionPlanner = pathPlannerRRT(costmap,'MinTurningRadius',57,'MinIterations', 1000,'ApproximateSearch',false,'GoalBias',0.8,'GoalTolerance',[0.01,0.01,0.01],'ConnectionDistance', 5);
        refPath = plan(motionPlanner, currentPose, goalPose);
 
    else
        count =i
        currentPose = routePlan{i, 'StartPose'};
        goalPose = routePlan{i, 'EndPose'};
        motionPlanner = pathPlannerRRT(costmap,'MinTurningRadius',57,'MinIterations', 1000,'ConnectionMethod','Reeds-Shepp','ApproximateSearch',false,'GoalBias',0.8,'GoalTolerance',[0.01,0.01,0.01],'ConnectionDistance', 5);
        refPath = plan(motionPlanner, currentPose, goalPose);
    end
 
    [transitionPoses, directions] = interpolate(refPath);
    approxSeparation = 0.1; % meters
    numSmoothPoses   = round(refPath.Length / approxSeparation);
    [refPoses, directions, cumLengths, curvatures] = smoothPathSpline(transitionPoses, directions, numSmoothPoses);
    path_dir = [refPoses directions];
    if i==1
        final = path_dir;

    else
        final = cat(1,final,path_dir);
        
    end
    
end

for n = 1 : height(routePlan)
    
    vehiclePose = routePlan{n, 'EndPose'};
    legendEntry = sprintf('Goal %i', n);
    helperPlotVehicle(vehiclePose, vehicleDims, 'DisplayName', legendEntry);
    
end



hSmoothPath = plot(final(:, 1), final(:, 2), 'r', 'LineWidth', 2, ...
    'DisplayName', 'Smoothed Path');
hold off


% figure(2)
% plot(ccConfig)

%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% Coming Back from docking to Parking
% 
%% 
route_back = (routePlan);



bl=2;  % Number of wavepoints 
route_back.StartPose(1,:) = routePlan.EndPose(l+2,:);
route_back.EndPose(1,:) = routePlan.StartPose(l+2,:);

route_back.StartPose(bl,:) = route_back.EndPose(1,:)
route_back.EndPose(bl,1) = 100;
route_back.EndPose(bl,2) = 210;
route_back.EndPose(bl,3) = -120;

route_back.StartPose(bl+1,1) = 100;
route_back.StartPose(bl+1,2) = 210;
route_back.StartPose(bl+1,3) = -120;
route_back.EndPose(bl+1,1) = 100;
route_back.EndPose(bl+1,2) = 60;
route_back.EndPose(bl+1,3) = 0; 

route_back.StartPose(bl+2,1) = 100;
route_back.StartPose(bl+2,2) = 60;
route_back.StartPose(bl+2,3) = 0;
route_back.EndPose(bl+2,1) = park(1);
route_back.EndPose(bl+2,2) = park(2);
route_back.EndPose(bl+2,3) = park(3); 

figure(4);
plot(costmap)
hold on
helperPlotVehicle(route_back{1, 'StartPose'}, vehicleDims, 'DisplayName', 'Current Pose')
legend

for i = 1:bl+2
        
    if i <= bl+1
        count =i
        currentPose = route_back{i, 'StartPose'};
        goalPose = route_back{i, 'EndPose'};
        motionPlanner = pathPlannerRRT(costmap,'MinTurningRadius',57,'MinIterations', 1000,'ApproximateSearch',false,'GoalBias',0.8,'GoalTolerance',[0.01,0.01,0.01],'ConnectionDistance', 5);
        refPath = plan(motionPlanner, currentPose, goalPose);
 
    else
        count =i
        currentPose = route_back{i, 'StartPose'};
        goalPose = route_back{i, 'EndPose'};
        motionPlanner = pathPlannerRRT(costmap,'MinTurningRadius',57,'MinIterations', 1000,'ConnectionMethod','Reeds-Shepp','ApproximateSearch',false,'GoalBias',0.8,'GoalTolerance',[0.01,0.01,0.01],'ConnectionDistance', 5);
        refPath = plan(motionPlanner, currentPose, goalPose);
    end

    
 
    [transitionPoses, directions] = interpolate(refPath);
    approxSeparation = 0.1; % meters
    numSmoothPoses   = round(refPath.Length / approxSeparation);
    [refPoses, directions, cumLengths, curvatures] = smoothPathSpline(transitionPoses, directions, numSmoothPoses);
    path_dir = [refPoses directions];
    if i==1
        final_back = path_dir;

    else
        final_back = cat(1,final_back,path_dir);
        
    end
end
    

for n = 1 : bl+2

        vehiclePose = route_back{n, 'EndPose'};
        legendEntry = sprintf('Goal %i', n);
        helperPlotVehicle(vehiclePose, vehicleDims, 'DisplayName', legendEntry);


    
end


hSmoothPath = plot(final_back(:, 1), final_back(:, 2), 'r', 'LineWidth', 2, ...
    'DisplayName', 'Smoothed Path');
hold off





