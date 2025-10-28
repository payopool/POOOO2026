#pragma once
#include"programingPa/Proxy/Sujeto.h"
#include"programingPa/Proxy/sujetoreal.h"
class Proxy : public Sujeto {
public:
	Proxy() : sujetoReal(nullptr) {}
	~Proxy() {
		delete sujetoReal;
	}
	void solicitar() override {
		if (sujetoReal == nullptr) {
			sujetoReal = new SujetoReal();
		}
		sujetoReal->solicitar();
	}
private:
	SujetoReal* sujetoReal;
};
