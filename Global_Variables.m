%%*************************************************************************
% Global_Variables.m
% This file contains all the global variables
% 
% 
% 
% 
% *************************************************************************




s = serial('COM7');
set(s,'BaudRate',115200);
fopen(s);


global Time_period;
Time_period = 0.05; % Time period of 1 cycle


