#ifndef TRAFFIC_LIGHT_H_
#define TRAFFIC_LIGHT_H_

#include "systemc.h"
#include<iostream>

enum state_type {
	S0,S1,S2,S3
};

SC_MODULE(traffic_controller){
	sc_in_clk clk;
	sc_in<bool> reset,IL,IC,AT;
	sc_out< sc_uint<2> > auto_estrada, via_lateral;
	sc_signal<state_type> state,next_state;

	void update_state();
	void state_logic();
	SC_CTOR(traffic_controller){
		SC_METHOD(update_state);
		sensitive << clk.pos();
		SC_METHOD(state_logic);
		sensitive << state << IL << IC << AT;
	}
};

#endif
