#include "systemc.h"

template <class T> SC_MODULE(DF_mul){
	sc_fifo_in<T> m_element, previous;
	sc_fifo_out<T> out;
	sc_in<int> v_element;

	void proc(){
		while(true){
			out.write(previous + (v_element.read() * m_element.read()));
		}
	}
	SC_CTOR(DF_mul){
		SC_THREAD(proc);
	}

};
