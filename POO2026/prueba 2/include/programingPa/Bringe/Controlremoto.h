#pragma once
#include"programingPa/Bringe/Dispositivo.h"

class ControlRemoto {
public:
			ControlRemoto(Dispositivo* d) :dispositivo(d) {}
		 virtual void encenderDispo() {
			dispositivo->ecender();
		}
		virtual void apagarDispo() {
			dispositivo->apagar();
		}
	protected:
		Dispositivo* dispositivo;
};
