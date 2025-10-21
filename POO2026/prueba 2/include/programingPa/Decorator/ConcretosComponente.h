#pragma once
#include "Header.h"
#include"programingPa/Decorator/Componente.h"
class ConcretComponente : public Componente  {
public:
	ConcretComponente() = default;
   ~ConcretComponente() = default;
		void operacion() {
			std::cout << "Operacion del Componente Concreto\n";
		}

};