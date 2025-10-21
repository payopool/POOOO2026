#pragma once
#include"programingPa/Decorator/Decorator.h"
#include "Header.h"
class DecoradorConA : public Decorator {
public:

		DecoradorConA(Componente* comp) : Decorator(comp) {}
	~DecoradorConA() = default;

	void operacion() override {
		Decorator::operacion();
		std::cout << "Agregando funcionalidad A en el decorador A\n";
	}
};