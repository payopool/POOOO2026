#pragma once
#include"programingPa/Decorator/Decorator.h"
#include "Header.h"
class DecoradorConB : public Decorator {
public:

	DecoradorConB(Componente* comp) : Decorator(comp) {}
	~DecoradorConB() = default;

	void operacion() override {
		Decorator::operacion();
		std::cout << "Agregando funcionalidad A en el decorador B\n";
	}
};
