function goalpose = docking(dock_number)


switch dock_number

    case 1 
        goalpose(1,1) = 178;
        goalpose(1,2) = 459;
        goalpose(1,3) = -90;
    case 2 
        goalpose(1,1) = 221;
        goalpose(1,2) = 459;
        goalpose(1,3) = -90;
    case 3 
        goalpose(1,1) = 0;
        goalpose(1,2) = 459;
        goalpose(1,3) = -90;
    case 4 
        goalpose(1,1) = 341 ;
        goalpose(1,2) = 459-100 ;
        goalpose(1,3) = 90 ;
    case 5 
        goalpose(1,1) = 0;
        goalpose(1,2) = 459-100;
        goalpose(1,3) = -90;
    case 6
        goalpose(1,1) = 0;
        goalpose(1,2) = 459;
        goalpose(1,3) = -90;
    case 7
        goalpose(1,1) = 0;
        goalpose(1,2) = 459;
        goalpose(1,3) = -90;
    case 8 
        goalpose(1,1) = 0;
        goalpose(1,2) = 459;
        goalpose(1,3) = -90;
    case 9 
        goalpose(1,1) = 0;
        goalpose(1,2) = 459;
        goalpose(1,3) = -90;
    case 10 
        goalpose(1,1) = 0;
        goalpose(1,2) = 459;
        goalpose(1,3) = -90;
    otherwise
        disp('Wrong dock number')
end
end