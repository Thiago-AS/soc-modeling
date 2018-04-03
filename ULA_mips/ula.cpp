#include "ula.h"

using namespace std;

void ADD::proc(){
	Z = (sc_int<SIZE>)A + (sc_int<SIZE>)B;
}

void SUB::proc(){
	Z = (sc_int<SIZE>)A - (sc_int<SIZE>)B;
}


void AND::proc(){
	Z = (sc_int<SIZE>)A & (sc_int<SIZE>)B;
}

void OR::proc(){
	Z = (sc_int<SIZE>)A | (sc_int<SIZE>)B;
}

void NOT::proc(){
	Z = ~(sc_int<SIZE>)A;
}

void XOR::proc(){
	Z = (sc_int<SIZE>)A ^ (sc_int<SIZE>)B;
}

void BYPASS::proc(){
	Z = A;
}

void SLT::proc(){
	if((sc_int<SIZE>)A < (sc_int<SIZE>)B)
		Z=1;
	else
		Z=0;
}

//SC_MODULE(ula){
//	sc_in< sc_uint<3> > opcode;
//	sc_in< sc_int<SIZE> > A, B;
//	sc_out< sc_int<SIZE> > Z;
//	sc_out<bool> zero;
//
//	AND *an;
//	SC_CTOR(ula){
//		an = new AND("u_and");
//		an->A(A);an->B(B);an->Z(Z);
//
//	}
//};
