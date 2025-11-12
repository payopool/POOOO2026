#pragma once
#pragma once
#include"Header.h"
#include"programingPa/chainresponsability/Manejador.h"

class ManejadorConcretA : public Manejador {
public:
	ManejadorConcretA(Manejador* _siguiente, const std::string& _name) : Manejador(_siguiente, _name) {}
	~ManejadorConcretA() = default;
	void manejarpeticion(int peticion) override {
		if (peticion >= 0 && peticion < 10) {
			std::cout << "ManejadorConcretA manejando peticion: " << peticion << "\n";
		}
		else {
			Manejador::manejarpeticion(peticion);
		}
	}
};