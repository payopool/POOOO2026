#pragma once
#include "Header.h"
#include "Documento.h"
class DocPrototype : public Documento {
public:
	DocPrototype() = default;
	~DocPrototype() = default;
	virtual DocPrototype* clone() const = 0;
	virtual void config(const std::string& _contenido) = 0;
	virtual void mostrarCon() const = 0;


};