#include"Header.h"
#include"programingPa/Builder/BuilderConcret.h"
#include"programingPa/Builder/Director.h"
#include"programingPa/Builder/Builder.h"
#include"programingPa/Builder/hawaiana.h"
#include"programingPa/Builder/Pizza.h"
#include"programingPa/Builder/ConstructorPizza.h"
#include"programingPa/Builder/vegetariana.h"
#include"programingPa/Prototype/Prototype.h"
#include"programingPa/Prototype/ConcretPrototipe.h"
#include"programingPa/Prototype/Documento.h"
#include "programingPa/Prototype/DocPrototype.h"
#include"programingPa/Prototype/DocText.h"
#include"programingPa/Prototype/Docimagen.h"



int main() {
	Builder* builder = new BuilderConcret();
	Director* director = new Director(builder);
	director->construir();
	Producto* producto = builder->getProducto();
	producto->show();
	delete producto;
	delete director;
	delete builder;

	ConstructorPizza* constructorPizza = new BuilderHawaiana();
	constructorPizza->addIngrediente(INGREDIENTES :: pepperoni);
	constructorPizza->buildIngedientes();
	Pizza* pizza = constructorPizza->getPizza();
	pizza->show();

	delete pizza;

	ConstructorPizza* constructorPizza2 = new BuilderVegetariana();
	constructorPizza2->addIngrediente(INGREDIENTES::albaca);
	constructorPizza2->addIngrediente(INGREDIENTES::aceite);
	constructorPizza2->buildIngedientes();
	Pizza* pizza2 = constructorPizza2->getPizza();
	pizza2->show();
	delete constructorPizza2;
	delete pizza2;

	
	Prototype* original = new ConcretPrototipe();
	original->config("Original");
	Prototype* copia = original->clone();
	copia->config("Copia del original");
	original->info();
	copia->info();
	delete original;
	delete copia;

	Docimagen* docImgOriginal = new Docimagen();
	docImgOriginal->config("Foto de vacaciones");
	DocPrototype* docImgCopia = docImgOriginal->clone();
	docImgCopia->config("Copia de la foto de vacaciones");
	docImgOriginal->mostrarCon();
	docImgCopia->mostrarCon();
	delete docImgOriginal;
	delete docImgCopia;
	DocText* docTextOriginal = new DocText();
	docTextOriginal->config("Documento importante");
	DocPrototype* docTextCopia = docTextOriginal->clone();
	docTextCopia->config("Copia del documento importante");
	docTextOriginal->mostrarCon();
	docTextCopia->mostrarCon();
	delete docTextOriginal;
	delete docTextCopia;

		






		return 0;
}