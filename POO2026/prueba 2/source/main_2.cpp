#include "Header.h"
#include "programingPa/MiSingleton.h"
#include "programingPa/RegistroActividad.h"
#include "programingPa/factoryMethod.h"
#include "programingPa/Vehiculo.h"
#include "programingPa/FactoriaVeiculo.h"
#include"programingPa/AbstractFactory/concretFactory.h"
MiSingleton* MiSingleton::instancia = nullptr;

int main() {
  MiSingleton* singleton = MiSingleton::getInstancia();
  singleton->setData(42);
  std::cout << "Data 1: " << singleton->getData() << "\n";

  MiSingleton* singleton2 = MiSingleton::getInstancia();
  singleton->setData(100);
  std::cout << "Data 2: " << singleton2->getData() << "\n";

  // Mostrar el registro de actividades al final
  RegistroActividad::getInstancia().mostrarActividades();

	fabrica* fabrica1 = new fabricaA(); // fabrica -> genera boing(fabricaA)
	producto* prod1 = fabrica1->crearProducto(); // producto -> boing(productoA)
	prod1->operacion();

	delete prod1;
	delete fabrica1;

	FactoriaBicicletas factoriaBici;
	Vehiculo* miBici = factoriaBici.crearVehiculo();
	std::cout << miBici->descripcion() << "\n";
	delete miBici;
	FactoriaCoches factoriaCoche;
	Vehiculo* miCoche = factoriaCoche.crearVehiculo();
	std::cout << miCoche->descripcion() << "\n";
	delete miCoche;

	FabricaAbstracta* fabrica = new FabricaConcreta1();
	ProductoA* productoA = fabrica->crearProductoA();
	ProductoB* productoB = fabrica->crearProductoB();

	productoA->operacionA();
	productoB->operacionB();

	delete productoA;
	delete productoB;


  return 0;
}