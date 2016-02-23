%%*************************************************************************
%  [ang,length,pressure,flow] = Data_acquire().m
% This file contains code for data acquisition
% 
% 
% 
% 
% *************************************************************************

function [ang,length1,length2,pressure1,pressure2] = Data_acquire()

    ang =       Get_angle();
    length1 =   Get_length(1);
    length2 =   Get_length(2);
    pressure1 = Get_pressure(1);
    pressure2 = Get_pressure(2);
    %flow =      Get_flow();
    
    fprintf('data read \n \r');



end