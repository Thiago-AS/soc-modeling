#include "ula.h"
#include "ula_tb.h"

using namespace std;

int sc_main (int argc, char *argv[]) {
    sc_signal<sc_int<SIZE>> A, B;
    sc_signal<sc_int<SIZE>> Z;
    sc_signal<sc_uint<3>> opcode;
    sc_signal<bool> zero;


	sc_trace_file* trace_file = sc_create_vcd_trace_file("wave");

	sc_trace(trace_file, A, "a");
	sc_trace(trace_file, B, "b");
	sc_trace(trace_file, opcode, "opcode");
	sc_trace(trace_file, Z, "z");
	sc_trace(trace_file, zero, "zero");


	cout << "iniciando ... " << endl;

	ula ula("ula");
	ula_tb tb("tb");

	ula.A(A);
	ula.B(B);
	ula.opcode(opcode);
	ula.Z(Z);
	ula.zero(zero);

	tb.A(A);
	tb.B(B);
	tb.opcode(opcode);
	tb.Z(Z);
	tb.zero(zero);

	sc_start (10, SC_PS);

	sc_close_vcd_trace_file(trace_file);
	cout << "Criou wave.vcd" << endl;

    return 0;

}
