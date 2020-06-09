function [edge] =  Map(position,num)
% position = [0 0];
% Input coordinates should be multiplied by 10
% It should be then shifted by a x = 487/2;  y = 773/2;
% Human position should be given below
x = (258-position(1)*10);
z = (390-position(2)*10);
w = 4; % Width of human

rgbImage = imread('finalimg.PNG');
rgbImage = imresize(rgbImage,[516 780]);
gray = rgb2gray(rgbImage);
edge = imgradient(gray);
edge = im2double(edge);

% To remove TUe logo
edge(350:510,600:760)=0;

% To make overall with in 0-1
for i=1:size(edge ,1)
    for j= 1:size (edge ,2)
        if edge(i,j) > 0.4
            edge(i,j)= 1;
        end
        if edge(i,j) <= 0.4
            edge(i,j)= 0;
        end
    end
end

% To put constraints on parking zone
pp= edge(350:505,50:500);
for i= 1:size(pp,1)
    for j=1:size(pp,2)
        if edge(350+i,50+j)==1
            edge(350+i,50+j)=0.9;
        end
    end
end

% % To make park of parking zone free inorder to park easily
% pp= edge(440:505,50:500);
% for i= 1:size(pp,1)
%     for j=1:size(pp,2)
%         if edge(440+i,50+j)==1
%             edge(440+i,50+j)=0.3;
%         end
%     end
% end

%To make area behind docing door to  occupied
edge(1:51,1:778)=1;
edge(1:51,140:587)=0.5;
% To mark boundary of docking station
edge(1:51,140)=0.5;
edge(1:51,587)=0.5;

% To provide the real docking point
edge(29:51,3:776)=0;
edge(3:51,4:140)=0;
edge(3:51,587:776)=0;

% To clean lines near docking door
pp= edge(51:200,3:776);
for i= 1:size(pp,1)
    for j=1:size(pp,2)
        if edge(51+i,3+j)>0.8
            edge(51+i,3+j)=0;
        end
    end
end
d = 0.3;
% Docking Lines
edge(1:154,140+20)=d;
edge(1:154,140+20+28)=d;
edge(1:154,140+20+28*1+14*1)=d;
edge(1:154,140+20+28*2+14*1)=d;
edge(1:154,140+20+28*2+14*2)=d;
edge(1:154,140+20+28*3+14*2)=d;
edge(1:154,140+20+28*3+14*3)=d;
edge(1:154,140+20+28*4+14*3)=d;
edge(1:154,140+20+28*4+14*4)=d;
edge(1:154,140+20+28*5+14*4)=d;
edge(1:154,140+20+28*5+14*5)=d;
edge(1:154,140+20+28*6+14*5)=d;
edge(1:154,140+20+28*6+14*6)=d;
edge(1:154,140+20+28*7+14*6)=d;
edge(1:154,140+20+28*7+14*7)=d;
edge(1:154,140+20+28*8+14*7)=d;
edge(1:154,140+20+28*8+14*8)=d;
edge(1:154,140+20+28*9+14*8)=d;
edge(1:154,140+20+28*9+14*9)=d;
edge(1:154,140+20+28*10+14*9)=d;


if num == 1
   edge(301:304,3:150)=1; 
else
   edge(301:304,400:777)=1; 
end
% Human position value is given with 0.8
edge(x-w:x+w,z-w:z+w)=1;
% imshow(edge)

end
















% Supporting code. The following code can be deleted once final simulation is successful



% for i = 2:size(edge,1)-1
%     for j= 1:size(edge,2)
%         if edge(i,j)==0 && edge(i+1,j)==1 && edge(i-1,j)==1
%             edge(i,j)=1;
%         end
%         
%     end
% end
% 
% 
% for i = 70:310
%     for j= 2:size(edge,2)-1
%         if edge(i,j)==0
%             if edge(i,j+1)==1 && edge(i,j-1)==1 
%               if edge(i-1,j)==1 || edge(i+1,j)==1
%                   edge(i,j)=1;
%               end
%             end
%            if edge(i,j-1)==1 && edge(i,j+1)==0
%                if edge(i-1,j)==1 || edge(i+1,j)==1
%                   edge(i,j)=1;
% 
%               end
%            end
%             if edge(i,j+1)==1 && edge(i,j-1)==0
%                 if edge(i-1,j)==1 || edge(i+1,j)==1
%               
%                   edge(i,j)=1;
%  
%                 end
%            end
%            
%         end
%         
%     end
% end
% edge(511:516,1:780)=1;

% edge(296:300,7:776)=0;
% edge(305:310,7:776)=0;
% edge(300:305,580:588) = 0;



% rgbImage = imread('image1.png');
% rgbImage = imresize(rgbImage,[487 773]);
% redChannel = rgbImage(:,:,1); % Red channel
% greenChannel = rgbImage(:,:,2); % Green channel
% blueChannel = rgbImage(:,:,3); % Blue channel
% 
% 
% gray = rgb2gray(rgbImage);
% edge = edge(gray,'Prewitt',1.17806);
% edge = imgradient(blueChannel);
% edge = edge./std(std(edge));
% % map = im2double(edge);
% 
% for i=1:size(edge ,1)
%     for j= 1:size (edge ,2)
%         if edge(i,j) > 0.95
%             edge(i,j)= 1;
%         end
%         if edge(i,j) <= 0.95
%             edge(i,j)= 0;
%             
% 
%         end
%     end
% end
% imshow(edge)
% costmap = vehicleCostmap(edge,'FreeThreshold',0.4, 'InflationRadius',0);
% 
% plot(costmap)
% 
% %% 
% 
% clc
% clear all
% rgbImage = imread('image1.png');
% rgbImage = imresize(rgbImage,[487 773]);
% redChannel = rgbImage(:,:,1); % Red channel
% greenChannel = rgbImage(:,:,2); % Green channel
% blueChannel = rgbImage(:,:,3); % Blue channel
% 
% 
% gray = rgb2gray(rgbImage);
% edge = edge(gray,'Roberts');
% edge = imgradient(blueChannel);
% edge = edge./std(std(edge));
% % map = im2double(edge);
% 
% for i=1:size(edge ,1)
%     for j= 1:size (edge ,2)
%         if edge(i,j) > 0.95
%             edge(i,j)= 1;
%         end
%         if edge(i,j) <= 0.95
%             edge(i,j)= 0;
%             
% 
%         end
%     end
% end
% imshow(edge)
% costmap = vehicleCostmap(edge,'FreeThreshold',0.4, 'InflationRadius',0);
% 
% plot(costmap)
% %% 
% rgbImage = imread('image1.png');
% rgbImage = imresize(rgbImage,[487 773]);
% redChannel = rgbImage(:,:,1); % Red channel
% greenChannel = rgbImage(:,:,2); % Green channel
% blueChannel = rgbImage(:,:,3); % Blue channel
% 
% 
% gray = rgb2gray(rgbImage);
% edge = edge(gray,'Sobel');
% edge = imgradient(blueChannel);
% edge = edge./std(std(edge));
% % map = im2double(edge);
% 
% for i=1:size(edge ,1)
%     for j= 1:size (edge ,2)
%         if edge(i,j) > 0.95
%             edge(i,j)= 1;
%         end
%         if edge(i,j) <= 0.95
%             edge(i,j)= 0;
%             
% 
%         end
%     end
% end
% imshow(edge)
% costmap = vehicleCostmap(edge,'FreeThreshold',0.4, 'InflationRadius',0);
% 
% plot(costmap)


