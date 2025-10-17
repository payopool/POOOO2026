#pragma once
#include"Header.h"
#include "programingPa/adapter/Circulodibujo.h"
#include "programingPa/adapter/CuadradoDibujo.h"
class Dibujable {
	public:
	Dibujable() = default;
	~Dibujable() = default;
	virtual void dibujar() {
		std::cout << "Dibujando una figura generica \n";
	}

};