#pragma once
#include "Header.h"
#include"programingPa/Decorator/Componente.h"

class Decorator : public Componente {
public:
	Decorator(Componente* comp) : componente_(comp) {}

	~Decorator() = default;

	void operacion() override {
		componente_->operacion();
	}

private:
	Componente* componente_;
};
