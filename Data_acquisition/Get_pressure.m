%%*************************************************************************
%  pressure = Get_pressure();
% This file gets pressure
% 
% 
% 
% 
% *************************************************************************

function pressure = Get_pressure()

    out = 0;

    if(isvalid(s)==0)
        fprintf('Invalid serial port, called from get pressure');
    end
    
    fprintf(s,'pre');
    
    out = fscanf(s,'%d');
    
    pressure = pressure_mapping(out);
end