%%*************************************************************************
%  length = Get_length();
% This file gets length
% 
% 
% 
% 
% *************************************************************************

function length = Get_length()
 out = zeros(1,10);

    if(isvalid(s)==0)
        fprintf('Invalid serial port, called from get length');
    end
    
    fprintf(s,'len');
    
    out = fscanf(s,'%d',10);
    
    length = length_mapping(out);

end