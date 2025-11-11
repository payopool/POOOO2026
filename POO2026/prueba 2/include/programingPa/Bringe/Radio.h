#pragma once
#include"Header.h"
#include"Dispositivo.h"
class Radio :public Dispositivo {
public:
	void ecender() override {
		std::cout << "Radio encendido\n";
	}
	void apagar() override {
		std::cout << "Radio apagado\n";
	}
};