#ifndef SQUARE_ROOT_H_
#define SQUARE_ROOT_H_

#include "systemc.h"

SC_MODULE(square_root){
	sc_in<bool>clk;
	sc_in<bool>rst;
	sc_in<bool>start;
	sc_in<int>num_in;
	sc_out<int>num_out;
	sc_out<bool>ready;

	void compute();

	SC_CTOR(square_root){
		SC_CTHREAD(compute,clk.pos());
		reset_signal_is(rst,true);
	}

private:
	int sqrt(unsigned num);
};



#endif
