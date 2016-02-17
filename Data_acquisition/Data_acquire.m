%%*************************************************************************
%  [ang,length,pressure,flow] = Data_acquire().m
% This file contains code for data acquisition
% 
% 
% 
% 
% *************************************************************************

function [ang,length,pressure,flow] = Data_acquire()

    ang =       Get_angle();
    length =    Get_length();
    pressure =  Get_pressure();
    flow =      Get_flow();
    
    fprintf('data read \n \r');



end