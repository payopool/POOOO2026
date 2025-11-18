#pragma once
class operacion{
	operacion() = default;
	~operacion() = default;

	virtual void ejecuta() = 0;
	virtual void deshacer() = 0;
};