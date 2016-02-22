

function ack = Send_to_arduino(Arduino_Outputs)

    c1 =Arduino_Outputs(1); 
    c2 =Arduino_Outputs(2); 
    s1 =Arduino_Outputs(3); 
    s2 =Arduino_Outputs(4); 
    s3 =Arduino_Outputs(5); 
    s4 =Arduino_Outputs(6); 
    v1 =Arduino_Outputs(7); 
    v2 =Arduino_Outputs(8); 
    v3 =Arduino_Outputs(9); 
    v4 =Arduino_Outputs(10); 

    

    Data_send(c1,c2,s1,s2,s3,s4,v1,v2,v3,v4);


end
