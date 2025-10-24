#pragma once
#include"Header.h"
#include"programingPa/composite/Sistema.h"
class archivo : public Sistema {
	public:
	archivo() = default;
	~archivo() = default;
	void MostrarInfo() {
		std::cout << "soy un archivo\n";
	}
};
