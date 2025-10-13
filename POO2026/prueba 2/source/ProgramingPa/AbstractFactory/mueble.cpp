#include"Header.h"
#include"programingPa/AbstractFactory/Mueble.h" // incluir la clase abstracta
// implementa los metodos de las clases concretas

void silla::descripcion() const { // definir el metodo descripcion
	std::cout << "Soy una silla miau\n";
}

void silla::color() const {
	std::cout << "Soy de color marron arrr\n";
}

void mesa::descripcion() const {
	std::cout << "Soy una mesa guau\n";
}

void mesa::color() const {
	std::cout << "Soy de color blanco blub\n";
}

