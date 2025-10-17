#pragma once
#include"Header.h"
#include"programingPa/adapter/Dibujable.h"
#include"programingPa/adapter/Circulodibujo.h"
#include "programingPa/adapter/CuadradoDibujo.h"



class AdapterDibujo : public Dibujable {
	public:
	AdapterDibujo(CirculoDibujo* circulo) : circuloDibujo(circulo) {}
	~AdapterDibujo() = default;
	void dibujar() override {
		std::cout << "Adaptando dibujo generico a dibujo de circulo \n";
		circuloDibujo->dibujarCirculo();
	}
private:
	CirculoDibujo* circuloDibujo;

};



class AdapterDibujoCuadrado : public Dibujable {
	public:
	AdapterDibujoCuadrado(CuadroDibujo* cuadrado) : cuadradoDibujo(cuadrado) {}
	~AdapterDibujoCuadrado() = default;
	void dibujar() override {
		std::cout << "Adaptando dibujo generico a dibujo de cuadrado \n";
		cuadradoDibujo->dibujarCuadrado();
	}
private:
	CuadroDibujo* cuadradoDibujo;
};

