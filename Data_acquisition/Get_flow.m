%%*************************************************************************
%  flow = Get_flow();
% This file gets flow
% 
% 
% 
% 
% *************************************************************************

function flow = Get_flow()

    out = 0;

    if(isvalid(s)==0)
        fprintf('Invalid serial port, called from get flow');
    end
    
    fprintf(s,'flo');
    
    out = fscanf(s,'%d');
    
    flow = flow_mapping(out);
end