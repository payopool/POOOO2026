#pragma once
#include"Header.h"
class ProductoA;
class ProductoB;
class FabricaAbstracta {
	public:
	virtual ProductoA* crearProductoA() const = 0;
	virtual ProductoB* crearProductoB() const = 0;
	virtual ~FabricaAbstracta() = default;
};

