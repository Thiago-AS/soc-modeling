#include "systemc.h"
#include "ula.h"
#include "ula_tb.h"

SC_MODULE ( top ) {
	ula_tb TB;
	ula ULA;

    sc_signal<sc_int<SIZE>> A, B;
    sc_signal<sc_int<SIZE>> Z;
    sc_signal<sc_uint<3>> opcode;
    sc_signal<bool> zero;

	SC_CTOR ( top ) : TB("tb"), ULA("ULA") {
		ULA.opcode(opcode); TB.opcode(opcode);
		ULA.A(A); 			TB.A(A);
		ULA.B(B);			TB.B(B);
		ULA.Z(Z); 			TB.Z(Z);
		ULA.zero(zero); 	TB.zero(zero);
	}
};
