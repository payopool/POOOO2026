#pragma once
#include"Implementacion.h"
#include"abstracion.h"
#include"Header.h"
class AbstraccionDefinida : public Abstraccion {
	public :
	AbstraccionDefinida(Implementacion* impl) : Abstraccion(impl) {}
	void operacion() override {
		std::cout << "Abstraccion Definida utilizando -> ";
		implementacion->operacion();
	}
};
