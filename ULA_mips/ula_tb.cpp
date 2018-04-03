#include "ula_tb.h"

using namespace std;

void ula_tb::aciona(){
	cout << "----" << " OPC " << " A " << " B " << "  Z " << " zero " << endl;
	A=5;B=10;opcode=0;
	wait(1, SC_PS);
	cout << sc_time_stamp() << "  " << opcode << "   " << A << "  " << B << "  " << Z << "   " << zero << endl;
	cout << "----" << " OPC " << " A " << " B " << "  Z " << " zero " << endl;
	A=5;B=10;opcode=1;
	wait(1, SC_PS);
	cout << sc_time_stamp() << "  " << opcode << "   " << A << "  " << B << "  " << Z << "   " << zero << endl;
	cout << "----" << " OPC " << " A " << " B " << "  Z " << " zero " << endl;
	A=5;B=10;opcode=2;
	wait(1, SC_PS);
	cout << sc_time_stamp() << "  " << opcode << "   " << A << "  " << B << "  " << Z << "   " << zero << endl;
	cout << "----" << " OPC " << " A " << " B " << "  Z " << " zero " << endl;
	A=5;B=10;opcode=3;
	wait(1, SC_PS);
	cout << sc_time_stamp() << "  " << opcode << "   " << A << "  " << B << "  " << Z << "   " << zero << endl;
	cout << "----" << " OPC " << " A " << " B " << "  Z " << " zero " << endl;
	A=5;B=10;opcode=4;
	wait(1, SC_PS);
	cout << sc_time_stamp() << "  " << opcode << "   " << A << "  " << B << "  " << Z << "   " << zero << endl;
	cout << "----" << " OPC " << " A " << " B " << "  Z " << " zero " << endl;
	A=5;B=10;opcode=5;
	wait(1, SC_PS);
	cout << sc_time_stamp() << "  " << opcode << "   " << A << "  " << B << "  " << Z << "   " << zero << endl;
	cout << "----" << " OPC " << " A " << " B " << "  Z " << " zero " << endl;
	A=5;B=10;opcode=6;
	wait(1, SC_PS);
	cout << sc_time_stamp() << "  " << opcode << "   " << A << "  " << B << "  " << Z << "   " << zero << endl;
	cout << "----" << " OPC " << " A " << " B " << "  Z " << " zero " << endl;
	A=5;B=10;opcode=7;
	wait(1, SC_PS);
	cout << sc_time_stamp() << "  " << opcode << "   " << A << "  " << B << "  " << Z << "   " << zero << endl;
}

