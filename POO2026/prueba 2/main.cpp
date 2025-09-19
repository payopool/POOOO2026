#include"Header.h"
#include"item.h"
#include"inventory.h"
#include"rectangulo.h"
#include"circulo.h"
#include"estudiantes.h"
#include"banco.h"
#include"usuarioBanc.h"
#include"Banquito.h"


class
	character{};
int main() {
	Inventory inventori;
	std::cout << "inventario inicial\n";
	inventori.additem("pocion vida", 3);
	inventori.additem("elixir de dios", 5);
		inventori.additem("oro", 13);
		inventori.useitem("pocion vida", 3);
		inventori.ShowInventory();		
		std::cout << "\n";

		Rectangulo rect(5.7, 3.8);
		std::cout << "Propiedades del rectangulo:\n";
		std::cout << "rectangulo- altura" << rect.getAltura() << "\n";
		std::cout << "rectangulo- ancho" << rect.getAncho() << "\n";
		std::cout << "Area del rectangulo: " << rect.area() << "\n";
		std::cout << "Perimetro del rectangulo: " << rect.perimetro() << "\n";
		std::cout << "\n";

		Fecha fecha;
		std::cout << "Fecha actual:\n";
		fecha.getFecha();
		std::cout << "\n";

		Circulo circulo(5.8);
		std::cout << "Propiedades del circulo:\n";
		std::cout << "radio del circulo:" << circulo.getm_radio() << "\n";
		std::cout << "area:" << circulo.m_area() << "\n";
		std::cout << "perimetro:" << circulo.m_preimetro() << "\n";
		std::cout << "\n";

		Estudiante estudiante [5];
		std::cout << "Lista de estudiantes:\n";
		estudiante[0].esturiante("juan", 19);
		estudiante[1].esturiante("pedro", 20);
		estudiante[2].esturiante("lupe", 20);
		estudiante[3].esturiante("ana", 20);
		estudiante[4].esturiante("pablo", 20);
		for(int i=0;i<5;i++){
			estudiante[i].mostrar();
		
			


		}
		std::cout << "\n";

		Banco OxxoSpin;
		std::cout << "Banco oxxo:\n";
		UsuarioBancario Payo = OxxoSpin.nuevoUsuario(CuentaBancaria("Payo", 666, 5000.0));
		UsuarioBancario Goku = OxxoSpin.nuevoUsuario(CuentaBancaria("goku", 617, 3000.0));
		std::cout << "Realizando la transferencia:\n";
		OxxoSpin.realizarTransferencia(Payo, Goku, 100.00, 2.09);
		OxxoSpin.realizarCompra(Goku, "Shampoo", 245.0, 1809); // Esto debe de dar cashBack (Compras en comercios = 1%)
		std::cout << "Despues de la transferencia:\n";
		Payo.getCuenta().consultarSaldo();
		Goku.getCuenta().consultarSaldo();
	
		
		return 0;
};
