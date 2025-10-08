#pragma once
#include"Header.h"

// Clase base abstracta
class Vehiculo {
public:
  virtual std::string descripcion() const = 0; // Método virtual puro
  virtual ~Vehiculo() = default;
};

// Clase concreta: Coche
class Coche : public Vehiculo {
public:
  std::string descripcion() const override {
    return "Soy un coche";
  }
};

// Clase concreta: Bicicleta
class Bicicleta : public Vehiculo {
public:
  std::string descripcion() const override {
    return "Soy una bicicleta";
  }
};

