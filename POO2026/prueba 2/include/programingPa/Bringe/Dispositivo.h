#pragma once
#include"Header.h"
class Dispositivo {
public:
	~Dispositivo() = default;
	virtual void ecender() = 0;

	
	virtual void apagar() = 0;
		
	
};