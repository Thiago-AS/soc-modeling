#include <iostream>
#include "mul.cpp"
#include "monitor.cpp"
#include "systemc.h"

int sc_main (int argc, char *argv[]) {
	monitor monitor("monitor");
	mul mul_0("mul0"),mul_1("mul1"),mul_2("mul2");
	sc_fifo<int> out0("initial_sum",3),out1("out_mul_0",1),out2("out_mul_1",1),out3("out_mul_2",1);
	sc_fifo<int> m_fifo0("matrix_col_0",3),m_fifo1("matrix_col_1",3),m_fifo2("matrix_col_2",3);
	sc_signal<int> v0,v1,v2;

	//Constants initialization
	out0.write(0); out0.write(0); out0.write(0);
	v0.write(2); v1.write(3); v2.write(4);

	//Fifo initialization
	m_fifo0.write(1); m_fifo1.write(1); m_fifo2.write(1);
	m_fifo0.write(2); m_fifo1.write(2); m_fifo2.write(2);
	m_fifo0.write(3); m_fifo1.write(3); m_fifo2.write(3);

	mul_0.previous(out0); mul_0.m_element(m_fifo0); mul_0.v_element(v0); mul_0.out(out1);
	mul_1.previous(out1); mul_1.m_element(m_fifo1); mul_1.v_element(v1); mul_1.out(out2);
	mul_2.previous(out2); mul_2.m_element(m_fifo2); mul_2.v_element(v2); mul_2.out(out3);
	monitor.element(out3);

	sc_start();

	return 0;
}
