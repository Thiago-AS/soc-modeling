#include "ula_tb.h"

using namespace std;

void ula_tb::aciona(){
	cout << "-----------TESTE_1-----------" << endl;
	A=5;B=10;opcode=0;
	wait(1, SC_PS);
	cout << sc_time_stamp() << "  OPC= " << opcode << "  A= " << A << "  B= " << B << "  Z= " << Z << "  Zero= " << zero << endl;
	A=5;B=10;opcode=1;
	wait(1, SC_PS);
	cout << sc_time_stamp() << "  OPC= " << opcode << "  A= " << A << "  B= " << B << "  Z= " << Z << "  Zero= " << zero << endl;
	A=5;B=10;opcode=2;
	wait(1, SC_PS);
	cout << sc_time_stamp() << "  OPC= " << opcode << "  A= " << A << "  B= " << B << "  Z= " << Z << "  Zero= " << zero << endl;
	A=5;B=10;opcode=3;
	wait(1, SC_PS);
	cout << sc_time_stamp() << "  OPC= " << opcode << "  A= " << A << "  B= " << B << "  Z= " << Z << "  Zero= " << zero << endl;
	A=5;B=10;opcode=4;
	wait(1, SC_PS);
	cout << sc_time_stamp() << "  OPC= " << opcode << "  A= " << A << "  B= " << B << "  Z= " << Z << "  Zero= " << zero << endl;
	A=5;B=10;opcode=5;
	wait(1, SC_PS);
	cout << sc_time_stamp() << "  OPC= " << opcode << "  A= " << A << "  B= " << B << "  Z= " << Z << "  Zero= " << zero << endl;
	A=5;B=10;opcode=6;
	wait(1, SC_PS);
	cout << sc_time_stamp() << "  OPC= " << opcode << "  A= " << A << "  B= " << B << "  Z= " << Z << "  Zero= " << zero << endl;
	A=5;B=10;opcode=7;
	wait(1, SC_PS);
	cout << sc_time_stamp() << "  OPC= " << opcode << "  A= " << A << "  B= " << B << "  Z= " << Z << "  Zero= " << zero << endl;

	cout << "-----------TESTE_2-----------" << endl;
	A=2147483647;B=1879187472;opcode=0;
	wait(1, SC_PS);
	cout << sc_time_stamp() << "  OPC= " << opcode << "  A= " << A << "  B= " << B << "  Z= " << Z << "  Zero= " << zero << endl;
	A=2147483647;B=1879187472;opcode=1;
	wait(1, SC_PS);
	cout << sc_time_stamp() << "  OPC= " << opcode << "  A= " << A << "  B= " << B << "  Z= " << Z << "  Zero= " << zero << endl;
	A=2147483647;B=1879187472;opcode=2;
	wait(1, SC_PS);
	cout << sc_time_stamp() << "  OPC= " << opcode << "  A= " << A << "  B= " << B << "  Z= " << Z << "  Zero= " << zero << endl;
	A=2147483647;B=1879187472;opcode=3;
	wait(1, SC_PS);
	cout << sc_time_stamp() << "  OPC= " << opcode << "  A= " << A << "  B= " << B << "  Z= " << Z << "  Zero= " << zero << endl;
	A=2147483647;B=1879187472;opcode=4;
	wait(1, SC_PS);
	cout << sc_time_stamp() << "  OPC= " << opcode << "  A= " << A << "  B= " << B << "  Z= " << Z << "  Zero= " << zero << endl;
	A=2147483647;B=1879187472;opcode=5;
	wait(1, SC_PS);
	cout << sc_time_stamp() << "  OPC= " << opcode << "  A= " << A << "  B= " << B << "  Z= " << Z << "  Zero= " << zero << endl;
	A=2147483647;B=1879187472;opcode=6;
	wait(1, SC_PS);
	cout << sc_time_stamp() << "  OPC= " << opcode << "  A= " << A << "  B= " << B << "  Z= " << Z << "  Zero= " << zero << endl;
	A=2147483647;B=1879187472;opcode=7;
	wait(1, SC_PS);
	cout << sc_time_stamp() << "  OPC= " << opcode << "  A= " << A << "  B= " << B << "  Z= " << Z << "  Zero= " << zero << endl;
}

