#pragma once
#include "Pizza.h"

class Pizza;

enum INGREDIENTES;

class ConstructorPizza {

public:
	ConstructorPizza() = default;
	~ConstructorPizza() = default;

	virtual void buildIngedientes() = 0;

	virtual void addIngrediente(INGREDIENTES ingrediente) = 0;

	virtual Pizza* getPizza() = 0;
};
