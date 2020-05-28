function goalpose = parking(park_num)

switch park_num
    case 1 
        goalpose(1,1) = 180;
        goalpose(1,2) = 90;
        goalpose(1,3) = 42;
    case 2 
        goalpose(1,1) = 0;
        goalpose(1,2) = 0;
        goalpose(1,3) = 42;
    case 3 
        goalpose(1,1) = 0;
        goalpose(1,2) = 0;
        goalpose(1,3) = 42;
    case 4 
        goalpose(1,1) = 370 ;
        goalpose(1,2) = 90 ;
        goalpose(1,3) = 42 ;
        
end
end
