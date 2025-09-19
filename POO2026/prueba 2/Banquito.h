#pragma once
#include"Header.h"
#include"banco.h"
#include"usuarioBanc.h"
class
	Banco {
public:
	Banco() = default;
	~Banco() = default;

	UsuarioBancario
		nuevoUsuario(CuentaBancaria cuenta) {
		UsuarioBancario usuario(cuenta);
		return usuario;
	}
	
	void
		realizarTransferencia(UsuarioBancario& cuentaOrigen,
			UsuarioBancario& cuentaDestino,
			double monto,
			int noRef) {
		if (monto > 0 && monto <= cuentaOrigen.getCuenta().consultarSaldo()) {
			cuentaOrigen.getCuenta().consultarSaldo() -= monto;
			cuentaDestino.getCuenta().consultarSaldo() += monto;
			std::cout << "Transferencia de " << monto << " de la cuenta "
				<< cuentaOrigen.getCuenta().getNumeroCuenta() << " a la cuenta "
				<< cuentaDestino.getCuenta().getNumeroCuenta()
				<< " realizada con exito." << " Numero de Referencia: " << noRef << "\n";
		}
		else {
			std::cout << "Error en la transferencia: monto invalido o saldo insuficiente. \n";
		}
	}

	void realizarCompra(UsuarioBancario& usuario, const std::string& comercio, double monto, int noRef) {
		if (monto > 0 && monto <= usuario.getCuenta().consultarSaldo()) {
			usuario.getCuenta().consultarSaldo() -= monto;

			std::cout << "Compra de " << comercio << " con un costo de " << monto
				<< " realizada con exito." << " Numero de Referencia: " << noRef
				<< ". numero de referencia: " << noRef << "\n";
			usuario.setCashBack(cashback(SUPERMERCADO, monto));
			std::cout << "Cashback obtenido: " << cashback(SUPERMERCADO, monto) << "\n";
		}
		else {
			std::cout << "Error en la compra: monto invalido o saldo insuficiente.\n";
		}
	}
	double cashback(TRADE comercio,double _monto) {
		double porcentaje = 0.0;
		switch (comercio) {
		case SUPERMERCADO:
			porcentaje = 0.01; // 1%
			break;
		case RESTAURANTE:
			porcentaje = 0.02; // 2%
			break;
		case TIENDA_ELECTRONICA:
			porcentaje = 0.03; // 3%
			break;
		case FARMACIOA:
			porcentaje = 0.01; // 1%
			break;
		default:
			porcentaje = 0.0; // No aplica
			break;
		}
		return _monto * porcentaje;
	}
	
};