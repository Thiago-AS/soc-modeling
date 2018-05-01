#include "square_root.h"

void square_root::compute(){
	//Reset section
	ready.write(false);
	num_out.write(0);
	wait();

	while(true){
		if(start.read()){
			int num_out_temp = sqrt(num_in.read());
			num_out.write(num_out_temp);
			ready.write(true);
			wait();
			ready.write(false);
		}
		wait();

	}
}


int square_root::sqrt(unsigned num){
	int r = 1; int d = 2; int s = 4;
	while(s<=num){
		r++; d+=2; s += (d+1);
	}
	return r;
}
