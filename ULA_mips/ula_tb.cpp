#include "systemc.h"
#include <iostream>
using namespace std;
#define SIZE 32


SC_MODULE (contorno) {

	sc_out< sc_int<SIZE> > A, B;
	sc_in< sc_int<SIZE> > Z;


	void aciona(){
		cout << "---" << "   A " << " B " << "Z " << "Carry" << endl;
		A = 6; B = 20;
		wait(1, SC_PS);
		cout << sc_time_stamp() << " " << A << " " << B << " " << Z << " " << endl;
	}

	SC_CTOR (contorno) {
		SC_THREAD(aciona);
	}
};

