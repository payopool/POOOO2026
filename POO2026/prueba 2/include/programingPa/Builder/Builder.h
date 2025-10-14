#pragma once
#include"Header.h"
#include"Producto.h"
class Producto;
class
	Builder {
public:
	Builder() = default;
	~Builder() = default;
	virtual void buildParteM() = 0;
	virtual void buildParteT() = 0;
	virtual Producto* getProducto() = 0;
};
