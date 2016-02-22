
%%*************************************************************************
% Cost_Outputs = Calculate_cost(Sensor_Data)
%  
%  - This function calculates the cost
% 
% 
% 
% 
%**************************************************************************





function Cost_Outputs = Calculate_cost(Desired_trajectory,Sensor_Data)

    ang =       Sensor_Data(1);
    length =    Sensor_Data(2);
    pressure =  Sensor_Data(3);
    flow =      Sensor_Data(4);

    
    des_ang =       Desired_trajectory(1);
    des_length =    Desired_trajectory(2);
    des_pressure =  Desired_trajectory(3);
    des_flow =      Desired_trajectory(4);
    
    Cost_Outputs = Desired_trajectory - Sensor_Data;


end