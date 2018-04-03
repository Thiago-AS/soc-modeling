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

void MUX::proc(){
	switch((sc_uint<3>)sel){
		case 0: Z=x0; break;
		case 1: Z=x1; break;
		case 2: Z=x2; break;
		case 3: Z=x3; break;
		case 4: Z=x4; break;
		case 5: Z=x5; break;
		case 6: Z=x6; break;
		case 7: Z=x7; break;

	}
}

void ula::proc(){
	if((sc_int<SIZE>)Z==0)
		zero = 0;
	else
		zero = 0;
}
