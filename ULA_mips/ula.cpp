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

void ZERO::proc(){
	if((sc_int<SIZE>)Z == 0)
		zero = 1;
	else
		zero = 0;
}

void MUX::proc(){
	switch((sc_uint<3>)sel){
		case op_add: Z=x0; break;
		case op_sub: Z=x1; break;
		case op_and: Z=x2; break;
		case op_or: Z=x3; break;
		case op_not: Z=x4; break;
		case op_xor: Z=x5; break;
		case op_bypass: Z=x6; break;
		case op_slt: Z=x7; break;

	}
}
