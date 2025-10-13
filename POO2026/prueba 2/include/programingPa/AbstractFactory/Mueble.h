#pragma once
#include "Header.h"
//clase abstracta
class mueble {
public:
  virtual void descripcion() const = 0; // implementa describcion
	virtual void color() const = 0; // implementa color
  virtual ~mueble() = default;
};

class silla : public mueble { // clase concreta
public:
	void descripcion() const override; //especifica la describcion de la silla
  void color() const override;
};

class mesa : public mueble { // clase concreta
public:
	void descripcion() const override; //especifica la describcion de la mesa
  void color() const override;
};
