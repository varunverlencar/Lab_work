%%*************************************************************************
% Set_c1(state);
% Set the state of coupler decoupler #1
% 
% 
% 
% 
% 
% *************************************************************************

function Set_c1(state)
    
    
    s1 = instrfind('Tag','sweet_serial_of_mine');
    
    
    if(state == 0)
        fprintf(s1,'c1d');
    elseif(state == 1)
        fprintf(s1,'c1e');
    end

end