#pragma once
#include"Header.h"
#include"programingPa/Proxy/imagen.h"
class Mostrar : public imagen {
public:

	Mostrar() = default;
	~Mostrar() = default;

	void mostrar () override {
		std::cout << "solicitar imagen: Show\n";
	}
};