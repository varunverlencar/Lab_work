%%*************************************************************************
% Global_Variables.m
% This file contains all the global variables
% 
% 
% 
% 
% *************************************************************************


%% TODO: create a global serial object


s = serial('COM7');
set(s,'BaudRate',115200);
fopen(s);