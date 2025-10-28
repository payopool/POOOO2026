#pragma once
#include"Header.h"
#include"programingPa/Proxy/Sujeto.h"
class SujetoReal : public Sujeto {
public :

	SujetoReal() = default;
	~SujetoReal()=default ;

	void solicitar() override {
		std::cout << "solicitar sujeto real: request\n";
	}
	};