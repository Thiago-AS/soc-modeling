#include "ula.h"

using namespace std;

SC_MODULE(ADD){
	sc_in< sc_int<SIZE> > A, B;
	sc_out< sc_int<SIZE+1> > Z;
	sc_out<bool> C_OUT;
	SC_CTOR(ADD){
		SC_METHOD(proc);
		sensitive << A << B;
	}
	void proc(){
		Z = A + B;
		C_OUT = Z[32];
	}
};

SC_MODULE(SUB){
	sc_in< sc_int<SIZE> > A, B;
	sc_out< sc_int<SIZE> > Z;
	SC_CTOR(SUB){
		SC_METHOD(proc);
		sensitive << A << B;
	}
	void proc(){
		Z = A - B;
	}
};

SC_MODULE(AND){
	sc_in< sc_int<SIZE> > A, B;
	sc_out< sc_int<SIZE> > Z;
	SC_CTOR(AND){
		SC_METHOD(proc);
		sensitive << A << B;
	}
	void proc(){
		Z = A & B;
	}
};

SC_MODULE(OR){
	sc_in< sc_int<SIZE> > A, B;
	sc_out< sc_int<SIZE> > Z;
	SC_CTOR(OR){
		SC_METHOD(proc);
		sensitive << A << B;
	}
	void proc(){
		Z = A | B;
	}
};

SC_MODULE(NOT){
	sc_in< sc_int<SIZE> > A;
	sc_out< sc_int<SIZE> > Z;
	SC_CTOR(NOT){
		SC_METHOD(proc);
		sensitive << A;
	}
	void proc(){
		Z = ~A;
	}
};

SC_MODULE(XOR){
	sc_in< sc_int<SIZE> > A, B;
	sc_out< sc_int<SIZE> > Z;
	SC_CTOR(XOR){
		SC_METHOD(proc);
		sensitive << A << B;
	}
	void proc(){
		Z = A ^ B;
	}
};

SC_MODULE(BYPASS){
	sc_in< sc_int<SIZE> > A;
	sc_out< sc_int<SIZE> > Z;
	SC_CTOR(BYPASS){
		SC_METHOD(proc);
		sensitive << A;
	}
	void proc(){
		Z = A;
	}
};

SC_MODULE(SLT){
	sc_in< sc_int<SIZE> > A;
	sc_out< sc_int<SIZE> > Z;
	SC_CTOR(SLT){
		SC_METHOD(proc);
		sensitive << A;
	}
	void proc(){
		if(A[31] == '1'){
			Z = {0};
			Z[31] = 1;
		}
		else
			Z = {0};
	}
};
