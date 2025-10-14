#pragma once
#include"Header.h"
class
	Producto {
public:
	Producto() = default;
	~Producto() = default;
	void add (const std::string&parte) {
		partes.push_back(parte);
	}
	void show() const {
		std::cout << "Producto creado con exito con las siguientes partes:\n";
		for (const auto& parte : partes) {
			std::cout << "- " << parte << "\n";
		}
	}
private:
	std::vector<std::string> partes;
};