#include "ula.h"
#include "ula_tb.h"
#include "system.h"

using namespace std;

int sc_main (int argc, char *argv[]) {
	top *system;
	system = new top("top");

	sc_trace_file* trace_file = sc_create_vcd_trace_file("wave");

	sc_trace(trace_file, system->A, "a");
	sc_trace(trace_file, system->B, "b");
	sc_trace(trace_file, system->opcode, "opcode");
	sc_trace(trace_file, system->Z, "z");
	sc_trace(trace_file, system->zero, "zero");

	cout << "iniciando ... " << endl;

	sc_start (10, SC_PS);

	sc_close_vcd_trace_file(trace_file);
	cout << "Criou wave.vcd" << endl;

    return 0;

}
