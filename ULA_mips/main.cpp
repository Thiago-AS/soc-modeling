#include "ula.h"
#include "ula_tb.cpp"

using namespace std;

int sc_main (int argc, char *argv[]) {
    sc_signal<sc_int<SIZE>> A, B;
    sc_signal<sc_int<SIZE>> Z;


	sc_trace_file* trace_file = sc_create_vcd_trace_file("wave");

	sc_trace(trace_file, A, "a");
	sc_trace(trace_file, B, "b");
	sc_trace(trace_file, Z, "z");


	cout << "iniciando ... " << endl;

	SUB f("f");
	contorno c("c");

	f.A(A);
	f.B(B);
	f.Z(Z);

	c.A(A);
	c.B(B);
	c.Z(Z);

	sc_start (10, SC_PS);

	sc_close_vcd_trace_file(trace_file);
	cout << "Criou wave.vcd" << endl;

    return 0;

}
