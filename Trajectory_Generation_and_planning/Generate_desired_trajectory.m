%%*************************************************************************
%   Desired_traj    = Generate_desired_trajectory(i)
%  - Generate the desired values of the trajectory
%   
% 
% 
% 
% 
%**************************************************************************

 


function Desired_traj    = Generate_desired_trajectory(i)

    t = i*Time_period; % Time period for which the calculations are to be done
    
%%********************************************************************
%     TODO: remove this section when you know how to generate your desired
%     trajectory
    des_ang =0;     
    des_length=0;  
    des_pressure=0; 
	des_flow=0;     
%
%
% *********************************************************************    
    Desired_traj(1) = des_ang;     
    Desired_traj(2) = des_length;  
    Desired_traj(3) = des_pressure ; 
    Desired_traj(4) = des_flow;     

    

end