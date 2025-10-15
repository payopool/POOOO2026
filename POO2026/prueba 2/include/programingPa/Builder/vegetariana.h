#pragma once
#include"programingPa/Builder/ConstructorPizza.h"
#include"programingPa/Builder/Pizza.h"
class BuilderVegetariana : public ConstructorPizza {
	public:
	BuilderVegetariana() {
		pizza = new Pizza();
	}
	~BuilderVegetariana() {
		delete pizza;
	}
	void buildIngedientes() override {
		pizza->addIngrediente(masa);
		pizza->addIngrediente(salsa);
		pizza->addIngrediente(queso);
		pizza->addIngrediente(albaca);
		pizza->addIngrediente(aceite);
	}
	void addIngrediente(INGREDIENTES ingrediente) {
		pizza->addIngrediente(ingrediente);
	}
	Pizza* getPizza() override {
		return pizza;
	}
private:
	Pizza* pizza;
};
