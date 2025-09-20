#pragma once
#include"Header.h"
#include"banco.h"
class
	UsuarioBancario {
public:
	UsuarioBancario(CuentaBancaria cuenta) {
		m_cuenta = cuenta;
		m_nombreUsuario = m_cuenta.m_propietario;
		m_antiguedad.getFecha();
		m_cashBack = m_cuenta.consultarSaldo() * 0.01; // 1% por defecto
		m_uniquePoints = 5;
	}

	~UsuarioBancario() = default;

	CuentaBancaria&
		getCuenta() {
		return m_cuenta;
	}
	void setCashBack(double cashBack) {
		m_cashBack = cashBack;
	}
	void documentacion() {
		std::cout << "Nombre del usuario: " << m_nombreUsuario << "\n";
		std::cout << "Numero de cuenta: " << m_cuenta.getNumeroCuenta() << "\n";
		std::cout << "Antiguedad: " << m_antiguedad.toString() << "\n";
		std::cout << "CashBack actual: " << m_cashBack << "\n";
		std::cout << "Unique Points: " << m_uniquePoints << "\n";
	
	}

private:
	CuentaBancaria m_cuenta;
	std::string m_nombreUsuario;
	std::vector<int> m_historialTransacciones;
	Fecha m_antiguedad;
	int m_cashBack; // 1% 3% 5%
	int m_uniquePoints;
};
