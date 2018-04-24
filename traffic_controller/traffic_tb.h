#ifndef TRAFFIC_TB_H_
#define TRAFFIC_TB_H_

#include "traffic_light.h"
#include <iostream>
using namespace std;


SC_MODULE (traffic_tb) {
	sc_in_clk clk;
	sc_out<bool> reset,IL,IC,AT;
	sc_in< sc_int<2> > auto_estrada, via_lateral;

	void proc_driver();
	void proc_check();

	SC_CTOR (traffic_tb) {
		SC_THREAD(proc_driver);
		sensitive << clk;
		SC_METHOD(proc_check);
		sensitive << auto_estrada << via_lateral;
	}
};

#endif
