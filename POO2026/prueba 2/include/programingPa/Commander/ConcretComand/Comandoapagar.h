#pragma once
#include"programingPa/Commander/Comando.h"
#include"programingPa/Commander/Luz.h"
//clase comando concreto
class Comandoapagar : public Comando {
	public:
	Comandoapagar(luz* luz1) : luz1_(luz1) {}
	~Comandoapagar() = default;
	void ejecutar() override {
		luz1_->apagar();
	}
	void deshacer() override {
		luz1_->encender();
	}
private:
	luz* luz1_;
};

