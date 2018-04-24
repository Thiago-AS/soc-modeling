#include "traffic_tb.h"

void traffic_tb::proc_driver(){
	reset.write(1); wait(); wait(); reset.write(0);
	AT.write(1); IL.write(1); IC.write(0); wait(); wait(); AT.write(0); IL.write(0); IC.write(0);
	AT.write(0); IL.write(0); IC.write(1); wait(); wait(); AT.write(0); IL.write(0); IC.write(0);
	AT.write(0); IL.write(1); IC.write(0); wait(); wait(); AT.write(0); IL.write(0); IC.write(0);
	AT.write(0); IL.write(0); IC.write(1); wait(); wait(); AT.write(0); IL.write(0); IC.write(0);

}

void traffic_tb::proc_check(){
	cout << sc_time_stamp()<< " (clk, auto_estrada, via_lateral: ) " << clk.read() << auto_estrada.read() << via_lateral.read() << endl;
}
