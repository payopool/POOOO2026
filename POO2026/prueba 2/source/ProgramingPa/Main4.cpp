#include"Header.h"

#include"programingPa/Commander/Comando.h"
#include"programingPa/Commander/Luz.h"
#include"programingPa/Commander/ConcretComand/Controlencender.h"
#include"programingPa/Commander/ConcretComand/Comandoapagar.h"
#include"programingPa/Commander/Inover/ControlRemoto.h"
#include"programingPa/Commander/ConcretComand/Operaciones.h"
#include"programingPa/Commander/operacion.h"
#include "programingPa/Commander/Inover/Cañculadora.h"


int main() {
	luz luz;
	Controlencender encender(&luz);
	Comandoapagar apagar(&luz);
	ControlRemoto control;
	control.ejecutarComando(&encender);
	control.ejecutarComando(&apagar);
	control.deshacerComando();

	std::cout << "\n";


	
	return 0;
}
