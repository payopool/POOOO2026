#pragma once
#include"Header.h"
#include"programingPa/Decorator/DecoratorCafe.h"
class DecoratorLeche : public DecoratorCafe {
	public:
	DecoratorLeche(Cafe* cafe) : DecoratorCafe(cafe) {}
	~DecoratorLeche() = default;
	void prepararCafe() override {
		DecoratorCafe::prepararCafe();
		std::cout << "Agregando leche al cafe\n";
	}
};

