#pragma once
#include "Header.h"
class Componente {
	public:
		Componente() = default;
     ~Componente() = default;

		virtual void 
			operacion() = 0;
		
};