#include "systemc.h"
#include <iostream>

SC_MODULE(monitor){
	sc_fifo_in<int> element;


	void proc(){
		while(true){
			std::cout<< " " << element.read();
		}
	}
	SC_CTOR(monitor){
		SC_THREAD(proc);
	}

};
