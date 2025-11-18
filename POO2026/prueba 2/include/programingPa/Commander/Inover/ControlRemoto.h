#pragma once
#include"Header.h"
#include"programingPa/Commander/Comando.h"
//clase invocadora
class ControlRemoto {
public:
	ControlRemoto() = default;
	~ControlRemoto() = default;
	void ejecutarComando(Comando* comando) {
		comando->ejecutar();
		m_historial.push_back(comando);
	}
	void deshacerComando() {
		if (!m_historial.empty()) {
			Comando* comando = m_historial.back();
			comando->deshacer();
			m_historial.pop_back();
		}
	}
private:
	std::vector<Comando*> m_historial;
};