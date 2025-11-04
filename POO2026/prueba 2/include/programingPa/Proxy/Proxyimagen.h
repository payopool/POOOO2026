#pragma once
#include"programingPa/Proxy/imagen.h"
#include"programingPa/Proxy/Mostrar.h"
class Proxy : public imagen {
public:
	Proxy() : Show (nullptr) {}
	~Proxy() {
		delete Show;
	}
	void mostrar() override {
		if (Show == nullptr) {
			Show = new Mostrar();
		}
		Show->mostrar();
	}
private:
	Mostrar* Show;
};
