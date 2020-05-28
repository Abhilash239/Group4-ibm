function SP = HAS(goal,obstacle)
% Example input
% HAS([341 375 -pi/2],[0 0]);
% goal = [341 375 -90];
% obstacle = [0 0];
start = [627 217 pi/2];
% Creating a costmap
CostMap = binaryOccupancyMap(Map(obstacle));
validator = validatorOccupancyMap;
validator.Map = CostMap;

% Inflating map to account for width (W/2 * 10)
inflate(CostMap,10);

% Planning
planner = plannerHybridAStar(validator,'MinTurningRadius',60,...
                             'MotionPrimitiveLength',10,...
                             'NumMotionPrimitives',5,...
                             'InterpolationDistance',1,...
                             'ReverseCost',5,...
                             'DirectionSwitchingCost',5);
startPose = start;
goalPose = [goal(1) goal(2) goal(3)*pi/180];
refpath = plan(planner,startPose,goalPose);
show(planner)

% Switching Point
interpolate(refpath,10000); 
path = refpath.States;
quadrant = (diff(path(:,1))<0);
orien = atan(diff(path(:,2))./diff(path(:,1))) + pi*quadrant;
change = rad2deg(diff(orien));
index = find(change==max(min(change)))+1;
SP = path(index,:);
SP(3) = 360+SP(3)*180/pi;

hold on
plot(path(index,1),path(index,2),'k.','MarkerSize',21)
legend('RRT','RRT','Path','Start','Goal','Switching Point')
hold off

end



