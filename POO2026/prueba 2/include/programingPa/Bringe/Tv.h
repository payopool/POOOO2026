#pragma on
#include"Header.h"
#include"Dispositivo.h"
class Tv :public Dispositivo {
	public:
	void ecender() override {
		std::cout << "Tv encendido\n";
	}
	void apagar() override {
		std::cout << "Tv apagado\n";
	}
};
