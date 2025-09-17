#pragma once
#include"Header.h"
#include"banco.h"
class usuarioBanc {
public:
	usuarioBanc(Banco cuenta){
		cuenta = cuenta;
		m_nombre_ = cuenta.propetario;
		m_antiguedad.getFecha();
		cashback = cuenta.getSaldo() * 0.01;
		M_uniquepoints = 0;
	}
	~usuarioBanc() = default;
private:
	Banco cuenta;
	std::string m_nombre_;
	int idusuario;
	Fecha m_antiguedad;
	std::vector<int> m_historial;
	int cashback;
	int M_uniquepoints;
};