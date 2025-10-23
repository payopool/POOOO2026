#pragma once
#include "Header.h"
#include"programingPa/Decorator/componente.h"
class Composite : public Componente {
public:
	Composite() = default;
	~Composite() = default;

	void operacion() override {
		std::cout << "Operacion realizada en el composite\n";
		for (auto child : children) {
			child->operacion(); // operecion en los hijos
		}

	}
	void add(Componente* componente) {
		children.push_back(componente); // agregar hijo
	}

private:
	std::vector<Componente*> children; // hijos del composite

};
