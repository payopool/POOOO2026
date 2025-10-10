#pragma once
#include"Header.h"
#include"programingPa/AbstractFactory/AbtractFactory.h"
#include"programingPa/AbstractFactory/A1.h"
#include"programingPa/AbstractFactory/B1.h"
class FabricaConcreta1 : public FabricaAbstracta {
	public:
		ProductoA* crearProductoA() const override {
			return new ProductoA1();
		}
		ProductoB* crearProductoB() const override {
			return new ProductoB1();
		}
};


