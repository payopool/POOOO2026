#pragma once
#include"Header.h"
//clase receptora
class luz {
	public:
	luz() = default;
	~luz() = default;
		
	void encender() {
		std::cout << "La luz se ha encendido\n";
	}
	void apagar() {
		std::cout << "La luz se ha apagado\n";
	}

};