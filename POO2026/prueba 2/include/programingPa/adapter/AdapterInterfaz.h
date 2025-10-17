#pragma once
#include "Header.h"
#include"programingPa/adapter/InterfasVieja.h"
#include"programingPa/adapter/interfaNew.h"
class AdapterInterfaz : public InterfaNew {
public:
	AdapterInterfaz(InterfaOld* vieja) : viejaInterfaz(vieja) {}
	~AdapterInterfaz() = default;
	void metodoNuevo() override {
		std::cout << "Adaptando metodo nuevo a metodo viejo \n";
		viejaInterfaz->metodoviejo();
	}
private:
	InterfaOld* viejaInterfaz;
};
