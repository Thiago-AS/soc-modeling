#ifndef SQUARE_ROOT_TB_H_
#define SQUARE_ROOT_TB_H_

#include "systemc.h"
#include <iostream>

SC_MODULE(square_root_tb){
	sc_out<bool>rst;
	sc_out<bool>start;
	sc_out<int>num_in;

	sc_in<int>num_out;
	sc_in<bool>ready;
	sc_in<bool>clk;

	void source();
	void sink();

	SC_CTOR(square_root_tb){
		SC_CTHREAD(source, clk.pos());
		SC_METHOD(sink);
		sensitive<<ready.pos();
	}

};



#endif
