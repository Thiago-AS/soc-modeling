#include "traffic_light.h"

void traffic_controller::update_state(){
	if(reset.read()==true)
		state = S0;
	else state = next_state;
}

void traffic_controller::state_logic(){
	switch(state){
		case S0: if(IL.read()==1 && AT.read()==1)
		        	 next_state = S1;
		         else
		        	 next_state = S0;
		         break;

		case S1: if(IC.read()==1)
					 next_state = S2;
				 else
				   	 next_state = S1;
				 break;

		case S2: if(IL.read()==1)
				   	 next_state = S3;
				 else
				  	 next_state = S2;
				 break;

		case S3: if(IC.read()==1)
					 next_state = S0;
				 else
				  	 next_state = S3;
				 break;

		default: next_state = S0;
				 break;
	}
}

void traffic_controller::output_logic(){
	switch(state){
		case S0:auto_estrada.write(0); via_lateral.write(2); break;
		case S1:auto_estrada.write(1); via_lateral.write(2); break;
		case S2:auto_estrada.write(2); via_lateral.write(0); break;
		case S3:auto_estrada.write(2); via_lateral.write(1); break;
	}
}
