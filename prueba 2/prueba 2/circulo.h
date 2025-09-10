#pragma once
#include "Header.h"
class Circulo {
public:
	Circulo(double r) : m_radio(r) {};
	~Circulo() = default;
	double m_area()const {
		return 3.14 * (m_radio * m_radio);
	}
	double m_preimetro()const {
		return 2 * 3.14 * m_radio;
	}
	double getm_radio() const {
		return m_radio;
	}


private:
	double m_radio;
};