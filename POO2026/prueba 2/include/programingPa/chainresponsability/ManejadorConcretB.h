
#pragma once
#include"Header.h"
#include"programingPa/chainresponsability/Manejador.h"

class ManejadorConcretB : public Manejador {
public:
	ManejadorConcretB(Manejador* _siguiente, const std::string& _name) : Manejador(_siguiente, _name) {}
	~ManejadorConcretB() = default;
	void manejarpeticion(int peticion) override {
		if (peticion >= 10 && peticion < 20) {
			std::cout << "ManejadorConcretB manejando peticion: " << peticion << "\n";
		}
		else {
			Manejador::manejarpeticion(peticion);
		}
	}
};