#pragma once
#include"Header.h"
class //abstracto
	producto {
	public:
		virtual void operacion() const = 0;
		virtual ~producto() = default;
		
};
class // base para fabrica
	fabrica {
	public:
		virtual producto* crearProducto() const = 0;
		virtual ~fabrica() = default;
};

class // concretoA
	productoA : public producto {
public:
	void operacion() const override {
		std::cout << "Operacion de Producto A\n";
	}
};

class // fabrica concretaA
	fabricaA : public fabrica {
public:
	producto* crearProducto() const override {
		return new productoA();
	}
};