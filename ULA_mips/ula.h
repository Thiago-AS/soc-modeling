#ifndef __ULA_H
#define __ULA_H

#include "systemc.h"
#include<iostream>

#define SIZE 32


enum OPCODE {
	op_add, op_sub, op_and, op_or, op_not, op_xor, op_bypass, op_slt
};

SC_MODULE(ADD){
	sc_in< sc_int<SIZE> > A, B;
	sc_out< sc_int<SIZE> > Z;
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

SC_MODULE(ZERO){
	sc_in< sc_int<SIZE> > Z;
	sc_out<bool> zero;
	void proc();
	SC_CTOR(ZERO){
		SC_METHOD(proc);
		sensitive << Z;
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

SC_MODULE(MUX){
	sc_in<sc_int<SIZE>> x0,x1,x2,x3,x4,x5,x6,x7;
	sc_in<sc_uint<3>> sel;
	sc_out<sc_int<SIZE>> Z;
	void proc();
	SC_CTOR(MUX){
		SC_METHOD(proc);
		sensitive <<  x0 << x1 << x2 << x3 << x4 << x5 << x6 << x7 << sel;
	}
};


SC_MODULE(ula) {
	sc_in< sc_uint<3> > opcode;
	sc_in< sc_int<SIZE> > A, B;
	sc_out< sc_int<SIZE> > Z;
	sc_out<bool> zero;
	sc_signal<sc_int<SIZE>> z0,z1,z2,z3,z4,z5,z6,z7;

	ADD *ula_add;
	SUB *ula_sub;
	AND *ula_and;
	OR *ula_or;
	NOT *ula_not;
	XOR *ula_xor;
	BYPASS *ula_bypass;
	SLT *ula_slt;
	MUX *ula_mux;
	ZERO *ula_zero;

	void proc(){}

	SC_CTOR(ula) {
		ula_add = new ADD("add");
		ula_sub = new SUB("sub");
		ula_and = new AND("and");
		ula_or  = new OR("or");
		ula_not = new NOT("not");
		ula_xor = new XOR("xor");
		ula_bypass  = new BYPASS("bypass");
		ula_slt  = new SLT("slt");
		ula_mux = new MUX("mux");
		ula_zero = new ZERO("zero");

		ula_add->A(A);ula_add->B(B);ula_add->Z(z0);
		ula_sub->A(A);ula_sub->B(B);ula_sub->Z(z1);
		ula_and->A(A);ula_and->B(B);ula_and->Z(z2);
		ula_or->A(A);ula_or->B(B);ula_or->Z(z3);
		ula_not->A(A);ula_not->Z(z4);
		ula_xor->A(A);ula_xor->B(B);ula_xor->Z(z5);
		ula_bypass->A(A);ula_bypass->Z(z6);
		ula_slt->A(A);ula_slt->B(B);ula_slt->Z(z7);

		ula_mux->sel(opcode);
		ula_mux->x0(z0);ula_mux->x1(z1);ula_mux->x2(z2);ula_mux->x3(z3);
		ula_mux->x4(z4);ula_mux->x5(z5);ula_mux->x6(z6);ula_mux->x7(z7);
		ula_mux->Z(Z);

		ula_zero->Z(Z);ula_zero->zero(zero);

		SC_METHOD(proc);
		sensitive << A << B << opcode;
	}
};

#endif

