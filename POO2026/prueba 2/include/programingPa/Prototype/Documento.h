#pragma once
#include"Header.h"
class Documento {

public:
	Documento() = default;
	~Documento() = default;

	void confiContenido(const std::string _contenido);


	void mostrarContenido() const;

private:
	std::string contenido;

};