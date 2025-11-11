#pragma once
#include"Implementacion.h"
class Abstraccion {
public:
	Abstraccion(Implementacion* impl) : implementacion(impl) {}
	virtual void operacion() = 0;
protected:
	Implementacion* implementacion;
};
