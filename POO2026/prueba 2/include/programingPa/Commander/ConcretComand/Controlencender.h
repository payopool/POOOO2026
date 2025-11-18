#pragma once
#include"programingPa/Commander/Comando.h"
#include"programingPa/Commander/Luz.h"
class Controlencender : public Comando {
	public:
	Controlencender(luz* luz1) : luz1_(luz1) {}
	~Controlencender() = default;
	void ejecutar() override {
		luz1_->encender();
	}
	void deshacer() override {
		luz1_->apagar();
	}
private:
	luz* luz1_;
};
