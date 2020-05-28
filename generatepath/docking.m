function goalpose = docking(dock_number)


switch dock_number

    case 1 
        goalpose(1,1) = 0;
        goalpose(1,2) = 0;
        goalpose(1,3) = 0;
    case 2 
        goalpose(1,1) = 0;
        goalpose(1,2) = 0;
        goalpose(1,3) = 0;
    case 3 
        goalpose(1,1) = 0;
        goalpose(1,2) = 0;
        goalpose(1,3) = 0;
    case 4 
        goalpose(1,1) = 341 ;
        goalpose(1,2) = 376 ;
        goalpose(1,3) = -90 ;
    case 5 
        goalpose(1,1) = 0;
        goalpose(1,2) = 0;
        goalpose(1,3) = 0;
    case 6
        goalpose(1,1) = 0;
        goalpose(1,2) = 0;
        goalpose(1,3) = 0;
    case 7
        goalpose(1,1) = 0;
        goalpose(1,2) = 0;
        goalpose(1,3) = 0;
    case 8 
        goalpose(1,1) = 0;
        goalpose(1,2) = 0;
        goalpose(1,3) = 0;
    case 9 
        goalpose(1,1) = 0;
        goalpose(1,2) = 0;
        goalpose(1,3) = 0;
    case 10 
        goalpose(1,1) = 0;
        goalpose(1,2) = 0;
        goalpose(1,3) = 0;
    otherwise
        disp('Wrong dock number')
end
end