#pragma once
#include"Header.h"
class InterfaOld {
public:
	InterfaOld() = default;
	~InterfaOld() = default;
	virtual void metodoviejo() {
		std::cout << "metodo de vieja interfaz \n";
	}
};