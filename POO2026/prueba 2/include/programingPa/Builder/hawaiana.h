#pragma once
#include"programingPa/Builder/ConstructorPizza.h"
#include"programingPa/Builder/Pizza.h"
class BuilderHawaiana : public ConstructorPizza {
public:
	BuilderHawaiana() {
		pizza = new Pizza();
	}
	~BuilderHawaiana() {
		delete pizza;
	}
	void buildIngedientes() override {
		pizza->addIngrediente(masa);
		pizza->addIngrediente(salsa);
		pizza->addIngrediente(queso);
		pizza->addIngrediente(jamon);
		pizza->addIngrediente(pina);
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