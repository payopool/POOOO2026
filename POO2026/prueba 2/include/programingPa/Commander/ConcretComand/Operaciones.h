#pragma once
class Operaciones {
public:
	Operaciones() : Resultado(0), valor(0) {}
	~Operaciones() = default;
	void Sumar(int val) {
		valor = val;
		Resultado += valor;
	}
	void Restar(int val) {
		valor = val;
		Resultado -= valor;

	}
	void multiplicar(int val) {
		valor = val;
		Resultado *= valor;
	}
	void dividir(int val) {
		valor = val;
		if (valor != 0) {
			Resultado /= valor;
		}
	}
	int getResultado() const {
		return Resultado;
	}
private:
	int Resultado;
	int valor;
};