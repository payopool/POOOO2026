#include"Header.h"
#include"item.h"
#include"inventory.h"
#include"rectangulo.h"


class
	character{};
int main() {
	Inventory inventori;
	inventori.additem("pocion vida", 3);
	inventori.additem("elixir de dios", 5);
		inventori.additem("oro", 13);
		inventori.useitem("pocion vida", 3);
		inventori.ShowInventory();		
		Rectangulo rect(5.0, 3.0);
		std::cout << "rectangulo- ancho" << rect.getAncho() << "\n";
		std::cout << "Area del rectangulo: " << rect.area() << "\n";
		std::cout << "Perimetro del rectangulo: " << rect.perimetro() << "\n";
		Fecha fecha;
		fecha.getFecha();
	
			
		
		return 0;
};
