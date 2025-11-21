#include"Header.h"

#include"programingPa/Commander/Comando.h"
#include"programingPa/Commander/Luz.h"
#include"programingPa/Commander/ConcretComand/Controlencender.h"
#include"programingPa/Commander/ConcretComand/Comandoapagar.h"
#include"programingPa/Commander/Inover/ControlRemoto.h"
#include"programingPa/Commander/ConcretComand/Operaciones.h"
#include"programingPa/Commander/operacion.h"
#include "programingPa/Commander/Inover/Cañculadora.h"
#include"programingPa/Flayweith/FactoryFlayweith.h"
#include"programingPa/State/playerstate.h"
#include"programingPa/State/Normalstate.h"
#include"programingPa/State/damagestate.h"
#include"programingPa/State/BerserkState.h"
#include"programingPa/State/player.h"
#include"programingPa/State/StateCar.h"
#include"programingPa/State/car.h"
#include"programingPa/State/CarFater.h"
#include"programingPa/State/carSlow.h"


int main() {
	luz luz;
	Controlencender encender(&luz);
	Comandoapagar apagar(&luz);
	ControlRemoto control;
	control.ejecutarComando(&encender);
	control.ejecutarComando(&apagar);
	control.deshacerComando();

	std::cout << "\n";

	Operaciones operacion;
	Calculadora calculadora;
	calculadora.getOperacion().Sumar(10);
	calculadora.getOperacion().Sumar(10);
	calculadora.mostrarResultado();
	calculadora.getOperacion().Restar(5);
	calculadora.mostrarResultado();
	calculadora.getOperacion().multiplicar(5);
	calculadora.mostrarResultado();
	calculadora.getOperacion().dividir(3);
	calculadora.mostrarResultado();
	calculadora.reiniciar();
	std::cout << "\n";
	FactoryFlayweith factory;
	Flyweight* fly1 = factory.getFlyweight('A');
	fly1->draw(10, 20);
	Flyweight* fly2 = factory.getFlyweight('B');
	fly2->draw(30, 40);

	std::cout << "\n";
	Player* player = new Player();
	player->Attack();
	player->Defend();
	player->Move();
	std::cout << "player damage\n";
	player->setState(new damageState());
	player->Attack();
	player->Defend();
	player->Move();
	std::cout << "player Berserk\n";
	player->setState(new BerserkState());
	player->Attack();
	player->Defend();
	player->Move();

	delete player ;
	std::cout << "\n";

	Car* car = new Car();
	std::cout << "Car Faster\n";
	car->setState(new CarFater());
	car->Accelerate();
	car->Brake();
	car->Turn();
	std::cout << "Car Slow\n";
	car->setState(new CarSlow());
	car->Accelerate();
	car->Brake();
	car->Turn();
	delete car;




	


	
	return 0;
}
