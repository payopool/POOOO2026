class Banco {
public:
	std::string propetario;
	Banco(std::string nombre, int saldo_inicial) : propetario(nombre), saldo(saldo_inicial) {}
	~Banco() = default;
	int getSaldo() const {
		return saldo;
	}
	void retirar(int cantidad) {
		if (cantidad <= saldo) {
			saldo -= cantidad;
		}
		else {
			std::cout << "no hay fondos suficientes" << "\n";
		}
	}
	
protected:
	int numero_cuenta;
	void depositar(int cantidad) {
		saldo += cantidad;
	}

private:
	int saldo;
};