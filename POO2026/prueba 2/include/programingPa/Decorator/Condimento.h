#pragma once
#include"Header.h"
#include"programingPa/Decorator/Cafe.h"
class Condimento: public Cafe {
public:
	Condimento() = default;
	~Condimento() = default;
void prepararCafe() override {
		std::cout << "Agregando condimentos al cafe\n";
}

};