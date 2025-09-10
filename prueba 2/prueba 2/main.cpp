#include"Header.h"
#include"item.h"
#include"inventory.h"
#include"rectangulo.h"
#include"circulo.h"
#include"estudiantes.h"


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
			std::cout<<"estudiante "<<i+1<< estudiante<<"\n";
		}

		


		

			
		
		return 0;
};
