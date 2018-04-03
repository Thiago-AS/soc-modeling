#ifndef __ULA_H
#define __ULA_H

#include "systemc.h"
#include<iostream>

#define SIZE 32


////enum OPCODE {
////	ADD, SUB, AND, OR, NOT, XOR, BYPASS, SLT
////};
//
//SC_MODULE(ula) {
//	sc_in< sc_uint<3> > opcode;
//	sc_in< sc_int<SIZE> > A, B;
//	sc_out< sc_int<SIZE> > Z;
//	sc_out<bool> zero;
//	void proc();
//	SC_CTOR(ula) {
//		SC_METHOD(proc);
//		sensitive << A << B << opcode;
//	}
//};

SC_MODULE(ADD){
	sc_in< sc_int<SIZE> > A, B;
	sc_out< sc_int<SIZE+1> > Z;
	sc_out<bool> C_OUT;
	void proc();
	SC_CTOR(ADD){
		SC_METHOD(proc);
		sensitive << A << B;
	}
};

SC_MODULE(SUB){
	sc_in< sc_int<SIZE> > A, B;
	sc_out< sc_int<SIZE> > Z;
	void proc();
	SC_CTOR(SUB){
		SC_METHOD(proc);
		sensitive << A << B;
	}
};

SC_MODULE(AND){
	sc_in< sc_int<SIZE> > A, B;
	sc_out< sc_int<SIZE> > Z;
	void proc();
	SC_CTOR(AND){
		SC_METHOD(proc);
		sensitive << A << B;
	}
};

SC_MODULE(OR){
	sc_in< sc_int<SIZE> > A, B;
	sc_out< sc_int<SIZE> > Z;
	void proc();
	SC_CTOR(OR){
		SC_METHOD(proc);
		sensitive << A << B;
	}
};

SC_MODULE(NOT){
	sc_in< sc_int<SIZE> > A;
	sc_out< sc_int<SIZE> > Z;
	void proc();
	SC_CTOR(NOT){
		SC_METHOD(proc);
		sensitive << A;
	}
};

SC_MODULE(XOR){
	sc_in< sc_int<SIZE> > A, B;
	sc_out< sc_int<SIZE> > Z;
	void proc();
	SC_CTOR(XOR){
		SC_METHOD(proc);
		sensitive << A << B;
	}
};

SC_MODULE(BYPASS){
	sc_in< sc_int<SIZE> > A;
	sc_out< sc_int<SIZE> > Z;
	void proc();
	SC_CTOR(BYPASS){
		SC_METHOD(proc);
		sensitive << A;
	}
};

SC_MODULE(SLT){
	sc_in< sc_int<SIZE> > A, B;
	sc_out< sc_int<SIZE> > Z;
	void proc();
	SC_CTOR(SLT){
		SC_METHOD(proc);
		sensitive << A << B;
	}
};

#endif

