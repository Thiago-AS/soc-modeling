#include "traffic_tb.h"
#include "traffic_light.h"
using namespace std;

int sc_main (int argc, char *argv[]) {
	sc_clock clk("clk",2,SC_PS);
	sc_signal<bool> reset,IL,IC,AT;
	sc_signal< sc_uint<2> > auto_estrada, via_lateral;

	traffic_tb tb("tb");
	tb.clk(clk);
	tb.reset(reset);
	tb.IL(IL);
	tb.IC(IC);
	tb.AT(AT);
	tb.auto_estrada(auto_estrada);
	tb.via_lateral(via_lateral);

	traffic_controller tc("tc");
	tc.clk(clk);
	tc.reset(reset);
	tc.IL(IL);
	tc.IC(IC);
	tc.AT(AT);
	tc.auto_estrada(auto_estrada);
	tc.via_lateral(via_lateral);

	sc_trace_file* trace_file = sc_create_vcd_trace_file("wave");

	sc_trace(trace_file, clk, "clock");
	sc_trace(trace_file, reset, "reset");
	sc_trace(trace_file, IL, "IL");
	sc_trace(trace_file, IC, "IC");
	sc_trace(trace_file, AT, "AT");
	sc_trace(trace_file, auto_estrada, "AE");
	sc_trace(trace_file, via_lateral, "VL");


	cout << "iniciando ... " << endl;

	sc_start (20, SC_PS);

	sc_close_vcd_trace_file(trace_file);
	cout << "Criou wave.vcd" << endl;

    return 0;

}
