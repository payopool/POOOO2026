#pragma once
#include"Header.h"
#include"programingPa/Decorator/DecoratorCafe.h"
class DecoratorAzucar : public DecoratorCafe {
public:
	DecoratorAzucar(Cafe* cafe) : DecoratorCafe(cafe) {}
	~DecoratorAzucar() = default;
	void prepararCafe() override {
		DecoratorCafe::prepararCafe();
		std::cout << "Agregando Azucar al cafe\n";
	}
};