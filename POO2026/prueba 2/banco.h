class Banco {
public:
	std::string propetario;
	Banco() = default;
	Banco(std::string nombre, double saldo_inicial, int numcuenta) : propetario(nombre), saldo(saldo_inicial),  numero_cuenta(numcuenta) {}
	~Banco() = default;
	int getSaldo() const {
		return saldo;
	}
	void setSaldo(double nuevo_saldo) {
		saldo = nuevo_saldo;
	}
	void transferir(Banco& otra_cuenta, double cantidad) {
		if (cantidad <= saldo) {
			saldo -= cantidad;
			otra_cuenta.depositar(cantidad);
		}
		else {
			std::cout << "no hay fondos suficientes" << "\n";
		}

	}
	void retirar(double cantidad) {
		if (cantidad <= saldo) {
			saldo -= cantidad;
		}
		else {
			std::cout << "no hay fondos suficientes" << "\n";
		}
	}
	
protected:
	int numero_cuenta;
	void depositar(double cantidad) {
		saldo += cantidad;
	}

private:
	double saldo;

	double tasa_interes() const {
		return 0.05;
	}
};