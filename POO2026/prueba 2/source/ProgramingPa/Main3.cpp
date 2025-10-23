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
#include"programingPa/adapter/InterfasVieja.h"
#include"programingPa/adapter/interfaNew.h"
#include"programingPa/adapter/AdapterInterfaz.h"
#include "programingPa/adapter/Adapterdibujos.h"
#include"programingPa/adapter/Dibujable.h"
#include"programingPa/adapter/Circulodibujo.h"
#include "programingPa/adapter/CuadradoDibujo.h"
#include "programingPa/Decorator/ConcretosComponente.h"
#include"programingPa/Decorator/DecoradorConA.h"
#include"programingPa/Decorator/DecoradorConB.h"
#include"programingPa/Decorator/DecoratorLeche.h"
#include"programingPa/Decorator/AzucarDecorator.h"
#include"programingPa/Decorator/Condimento.h"
#include"programingPa/composite/Hoja.h"
#include"programingPa/composite/composite.h"








int main() {
	Builder* builder = new BuilderConcret();
	Director* director = new Director(builder);
	director->construir();
	Producto* producto = builder->getProducto();
	producto->show();
	delete producto;
	delete director;
	delete builder;
	
	std::cout << "\n";

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

	std::cout << "\n";
	
	Prototype* original = new ConcretPrototipe();
	original->config("Original");
	Prototype* copia = original->clone();
	copia->config("Copia del original");
	original->info();
	copia->info();
	delete original;
	delete copia;

	std::cout << "\n";

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

	std::cout << "\n";

	//crear instancia de la vieja interfaz
	InterfaOld* viejaInterfaz = new InterfaOld();
	InterfaNew* adaptador = new AdapterInterfaz(viejaInterfaz);
	// usar el adaptador para llamar al metodo nuevo
	adaptador->metodoNuevo();
	// liberar memoria
	delete adaptador;
	delete viejaInterfaz;

	std::cout << "\n";

	CirculoDibujo* circulo = new CirculoDibujo();
	Dibujable* adapterDibujo = new AdapterDibujo(circulo);
	adapterDibujo->dibujar();
	delete adapterDibujo;
	delete circulo;
	CuadroDibujo* cuadrado = new CuadroDibujo();
	Dibujable* adapterDibujoCuadrado = new AdapterDibujoCuadrado(cuadrado);
	adapterDibujoCuadrado->dibujar();
	delete adapterDibujoCuadrado;
	delete cuadrado;

	std::cout<<"\n";

	Componente* componente = new ConcretComponente();
	Componente* decoradorA = new DecoradorConA(componente);
	Componente* decoradorB = new DecoradorConB(decoradorA);

	decoradorB->operacion();

	delete componente;
	delete decoradorA;
	delete decoradorB;

	std::cout << "\n";

	Cafe* cafe = new Condimento();
	Cafe* cafeConLeche = new DecoratorLeche(cafe);
	Cafe* cafeConLecheYAzucar = new DecoratorAzucar(cafeConLeche);
	cafeConLecheYAzucar->prepararCafe();
	delete cafe;
	delete cafeConLeche;
	delete cafeConLecheYAzucar;

	std::cout << "\n";

	Hoja* hoja1 = new Hoja();
	Hoja* hoja2 = new Hoja();
	Composite* composite = new Composite();
	composite->add(hoja1);
	composite->add(hoja2);
	composite->operacion();
	delete hoja1;
	delete hoja2;
	delete composite;
	

		
	

		



		return 0;
}