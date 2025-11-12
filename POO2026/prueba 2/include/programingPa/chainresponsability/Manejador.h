#pragma once
#include"Header.h"
class Manejador {
public:
	Manejador(Manejador* _siguiente, const std::string& _name) : siguiente(_siguiente), name(_name) {}
	~Manejador() = default;
	virtual void manejarpeticion(int peticion) {
		if (siguiente) {
			siguiente->manejarpeticion(peticion);
		}
	}
private:
	Manejador* siguiente;
	std::string name;
};