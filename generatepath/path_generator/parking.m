function goalpose = parking(park_num)

switch park_num
    case 1 
        goalpose(1,1) = 150;
        goalpose(1,2) = 64;
        goalpose(1,3) = 42;
    case 2 
        goalpose(1,1) = 215;
        goalpose(1,2) = 64;
        goalpose(1,3) = 42;
    case 3 
        goalpose(1,1) = 0;
        goalpose(1,2) = 64;
        goalpose(1,3) = 42;
    case 4 
        goalpose(1,1) = 340 ;
        goalpose(1,2) = 64 ;
        goalpose(1,3) = 42 ;
    otherwise
        disp('Wrong park number')
        
end
end
