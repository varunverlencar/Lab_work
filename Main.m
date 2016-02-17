 

%%*************************************************************************
%  Main Code file
% function calls:
% - [ang,length,pressure,flow]=Data_acquire()
% 
% 
% 
% 
%**************************************************************************

%% Global Variables
% Global_Variables

function Main()
    Global_Variables
    
    Sensor_Data = zeros(1,4);
    
    while(1)
        Sensor_Data     = Data_acquire();
%         Cost_Outputs    = Calculate_cost(Sensor_Data); %Not implemented yet
%         Arduino_Outputs = controller(Cost_Outputs); % Not implmented yet
%         ack             = Send_to_arduino(Arduino_Outputs);% Not implemented yet
    end

end