#include"Header.h"
#include"item.h"
#include"inventory.h"
#include"rectangulo.h"
#include"circulo.h"
#include"estudiantes.h"
#include"banco.h"


class
	character{};
int main() {
	Inventory inventori;
	inventori.additem("pocion vida", 3);
	inventori.additem("elixir de dios", 5);
		inventori.additem("oro", 13);
		inventori.useitem("pocion vida", 3);
		inventori.ShowInventory();		
		Rectangulo rect(5.7, 3.8);
		std::cout << "rectangulo- ancho" << rect.getAncho() << "\n";
		std::cout << "Area del rectangulo: " << rect.area() << "\n";
		std::cout << "Perimetro del rectangulo: " << rect.perimetro() << "\n";
		Fecha fecha;
		fecha.getFecha();
		Circulo circulo(5.8);
		std::cout << "radio del circulo:" << circulo.getm_radio() << "\n";
		std::cout << "area:" << circulo.m_area() << "\n";
		std::cout << "perimetro:" << circulo.m_preimetro() << "\n";
		Estudiante estudiante [5];
		estudiante[0].esturiante("juan", 19);
		estudiante[1].esturiante("pedro", 20);
		estudiante[2].esturiante("lupe", 20);
		estudiante[3].esturiante("ana", 20);
		estudiante[4].esturiante("pablo", 20);
		for(int i=0;i<5;i++){
			estudiante[i].mostrar();
		
			


		}
		Banco cuenta1("carlos", 500.0, 4590);
		Banco cuenta2("lola", 300.0, 4591);
		std::cout << "saldo cuenta carlos:" << cuenta1.getSaldo() << "\n";
		std::cout << "saldo cuenta lola:" << cuenta2.getSaldo() << "\n";
		std::cout << "transfiriendo 200 de la cuenta carlos a la cuenta lola\n";
		cuenta1.transferir(cuenta2, 200);
		std::cout << "saldo cuenta carlos:" << cuenta1.getSaldo() << "\n";
		std::cout << "saldo cuenta lola:" << cuenta2.getSaldo() << "\n";
		cuenta2.retirar(200);
		std::cout << "saldo cuenta lola despues de retirar 200 es:" << cuenta2.getSaldo() << "\n";
	

		


		

			
		
		return 0;
};
