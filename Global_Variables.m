%%*************************************************************************
% Global_Variables.m
% This file contains all the global variables
% 
% 
% 
% 
% *************************************************************************




s = serial('COM7','DataBits',8,'Parity','none','StopBits',1);
set(s,'BaudRate',115200);
set(s,'Tag','sweet_serial_of_mine')
set(s,'Timeout',0.001);
%  s.ReadAsyncMode = 'manual';
fopen(s);


global Time_period;
Time_period = 0.05; % Time period of 1 cycle

global Kp;
Kp=1; % Kp gain for value open

global M1_expansion_length;
M1_expansion_length = 0.12; % the length we want M1 to expand to when we are increasing angle and shortening M2



