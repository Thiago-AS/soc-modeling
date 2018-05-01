#include "square_root.h"
#include "square_root_tb.h"
using namespace std;

int sc_main (int argc, char *argv[]) {
	sc_clock clk("clk",2,SC_NS);
	sc_signal<bool> rst,start,ready;
	sc_signal<int> num_out, num_in;

	square_root_tb tb("tb");
	tb.clk(clk);
	tb.rst(rst);
	tb.start(start);
	tb.num_in(num_in);
	tb.num_out(num_out);
	tb.ready(ready);

	square_root sqrt("sqrt");
	sqrt.clk(clk);
	sqrt.rst(rst);
	sqrt.start(start);
	sqrt.num_in(num_in);
	sqrt.num_out(num_out);
	sqrt.ready(ready);

	sc_trace_file* trace_file = sc_create_vcd_trace_file("wave");

	sc_trace(trace_file, clk, "clock");
	sc_trace(trace_file, rst, "reset");
	sc_trace(trace_file, start, "start");
	sc_trace(trace_file, num_in, "num_in");
	sc_trace(trace_file, num_out, "num_out");
	sc_trace(trace_file, ready, "ready");


	cout << "iniciando ... " << endl;

	sc_start ();

	sc_close_vcd_trace_file(trace_file);
	cout << "Criou wave.vcd" << endl;

    return 0;

}
