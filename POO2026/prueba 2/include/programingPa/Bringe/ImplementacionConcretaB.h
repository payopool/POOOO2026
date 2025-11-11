#pragma once
#include"Header.h"
#include"Implementacion.h"

class ImplementacionConcretaB : public Implementacion {
public:
	void operacion() override {
		std::cout << "Implementacion Concreta B\n";
	}
};
