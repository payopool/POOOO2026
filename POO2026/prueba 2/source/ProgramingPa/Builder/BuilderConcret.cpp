#include"programingPa/Builder/BuilderConcret.h"

BuilderConcret::BuilderConcret() {
	producto = new Producto();
}
void BuilderConcret::buildParteM() {
	if (producto) {
		producto->add("Parte M");
	}
}
void BuilderConcret::buildParteT() {
	if (producto) {
		producto->add("Parte T");
	}
}
Producto* BuilderConcret::getProducto() {
	if (producto) {
		return producto;
	}
	return nullptr;
}
