#pragma once
#include"Header.h"
class Dispositivo {
public:
	~Dispositivo() = default;
	virtual void ecender() {
		std::cout << "Dispositivo encendido\n";

	}
	virtual void apagar() {
		std::cout << "Dispositivo apagado\n";
	}
};