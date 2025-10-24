#pragma once
#include "Header.h"
#include"programingPa/composite/Sistema.h"
class carpeta : public Sistema {
	public:
		carpeta() = default;
		~carpeta() = default;
		void MostrarInfo() override {
			std::cout << " carpeta\n";
		}
	
};