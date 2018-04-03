#include "ula_tb.h"

using namespace std;

void ula_tb::aciona(){
	cout << "---" << " A " << " B " << " opcode " << " Z " << " zero " << endl;
	A=5;B=10;opcode=7;
	wait(1, SC_PS);
	cout << sc_time_stamp() << " " << A << " " << B << " " << opcode << " " << Z << " " << zero << endl;
}

