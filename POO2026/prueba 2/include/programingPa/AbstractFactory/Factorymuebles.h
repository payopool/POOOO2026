#pragma once
#include"Header.h"
#include"Mueble.h"
// define la interfas de la factoria
class Factorymuebles {
	public:
		virtual mueble* crearMueble() const = 0; // metodo para crear muebles
		virtual ~Factorymuebles() = default;
};
class Factorysilla : public Factorymuebles { 
	public:
		mueble* crearMueble() const override { // implementa el metodo para crear una silla
			return new silla();
		}
};
class Factorymesa : public Factorymuebles {
	public:
		mueble* crearMueble() const override {
			return new mesa();
		}
};
