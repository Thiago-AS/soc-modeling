#include "systemc.h"

SC_MODULE(mul){
	sc_fifo_in<int> m_element, previous;
	sc_fifo_out<int> out;
	sc_in<int> v_element;

	void proc(){
		while(true){
			out.write(previous.read() + (v_element.read() * m_element.read()));
		}
	}
	SC_CTOR(mul){
		SC_THREAD(proc);
	}

};
