#pragma once
#include"programingPa/Commander/ConcretComand/Operaciones.h"
#include"programingPa/Commander/operacion.h"
#include"Header.h"
//clase comando concreto
class Calculadora {
public:
	Calculadora() = default;
	~Calculadora() = default;
	Operaciones& getOperacion() {
		return operacion_;
	}
	void reiniciar() {
		operacion_ = Operaciones();
	}
	void mostrarResultado() {
		std::cout << "El resultado es: " << operacion_.getResultado() << std::endl;
	}


private:
	Operaciones operacion_;

	
};