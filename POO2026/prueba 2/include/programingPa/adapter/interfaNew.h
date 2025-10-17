#pragma once
#include"Header.h"
class InterfaNew {
public:
	InterfaNew() = default;
	~InterfaNew() = default;
	virtual void metodoNuevo() {
		std::cout << "metodo de nueva interfaz \n";
	}
};