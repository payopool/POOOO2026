#include"Header.h"
#include"programingPa/Builder/BuilderConcret.h"
#include"programingPa/Builder/Director.h"
#include"programingPa/Builder/Builder.h"

int main() {
	Builder* builder = new BuilderConcret();
	Director* director = new Director(builder);
	director->construir();
	Producto* producto = builder->getProducto();
	producto->show();
	delete producto;
	delete director;
	delete builder;

		return 0;
}