#include"Header.h"
#include"programingPa/Bringe/abstracion.h"
#include"programingPa/Bringe/ImplementacionConcretaA.h"
#include"programingPa/Bringe/ImplementacionConcretaB.h"
#include"programingPa/Bringe/abstraccionDefinida.h"
#include"programingPa/Bringe/Dispositivo.h"
#include"programingPa/Bringe/Controlremoto.h"
#include"programingPa/Bringe/Tv.h"
#include"programingPa/Bringe/Radio.h"

int main() {

	Implementacion* implA = new ImplementacionConcretaA();
	Abstraccion* abstraccionA = new AbstraccionDefinida(implA);
	abstraccionA->operacion();
	Implementacion* implB = new ImplementacionConcretaB();
	Abstraccion* abstraccionB = new AbstraccionDefinida(implB);
	abstraccionB->operacion();

	std::cout << "\n";

	Dispositivo* tv = new Tv();
	Dispositivo* radio = new Radio();

	ControlRemoto* controlTv = new ControlRemoto(tv);
	ControlRemoto* controlRadio = new ControlRemoto(radio);

	controlTv->encenderDispo();
	controlTv->apagarDispo();

	controlRadio->encenderDispo();
	controlRadio->apagarDispo();



	return 0;
}
