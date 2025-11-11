#pragma once
#include"Header.h"
#include"Implementacion.h"

class ImplementacionConcretaA : public Implementacion {
public:
	void operacion() override {
		std::cout << "Implementacion Concreta A\n";
	}
};