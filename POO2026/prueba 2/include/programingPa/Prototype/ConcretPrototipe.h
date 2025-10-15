#pragma once
#include"Header.h"
#include"programingPa/Prototype/Prototype.h"

class ConcretPrototipe : public Prototype {
public:
	ConcretPrototipe() = default;
	~ConcretPrototipe() = default;

	Prototype*
		clone() const override {
		ConcretPrototipe* copia = new ConcretPrototipe ();
		copia->config(value);
		return copia;
	}
	void config(const std::string _value) override {
		value = _value;
	}

	void info() const override {
		std::cout << "Valor: " << value << "\n";
	}

private:
	std::string value;

};
	

