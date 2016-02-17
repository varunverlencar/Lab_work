%%*************************************************************************
%  ang = Get_angle();
% This file gets angle
% 
% 
% 
% 
% *************************************************************************

function ang = Get_angle()

    out = 0;

    if(isvalid(s)==0)
        fprintf('Invalid serial port, called from get angle');
    end
    
    fprintf(s,'ang');
    
    out = fscanf(s,'%d');
    
    ang = ang_mapping(out);
end