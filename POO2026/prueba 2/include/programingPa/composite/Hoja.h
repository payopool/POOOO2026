#pragma once
#include"Header.h"
#include"programingPa/Decorator/componente.h"
class Hoja : public Componente {
	public:
	Hoja() = default;
	~Hoja() = default;
	void operacion() override {
		std::cout << "Operacion realizada en la hoja\n";
	}
};