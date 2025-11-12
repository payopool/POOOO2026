
#pragma once
#include"Header.h"
#include"programingPa/chainresponsability/Manejador.h"

class ManejadorConcretC : public Manejador {
public:
	ManejadorConcretC(Manejador* _siguiente, const std::string& _name) : Manejador(_siguiente, _name) {}
	~ManejadorConcretC() = default;
	void manejarpeticion(int peticion) override {
		std::cout << "ManejadorConcretC manejando peticion: " << peticion << "\n";
	}
};