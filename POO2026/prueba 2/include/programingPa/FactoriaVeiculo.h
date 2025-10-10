#pragma once
#include"Header.h"
#include"Vehiculo.h"
// Clase base abstracta para factorías
class FactoriaVehiculos {
public:
  virtual Vehiculo* crearVehiculo() const = 0; 
  virtual ~FactoriaVehiculos() = default;
};

// Factoría concreta: Coche
class FactoriaCoches : public FactoriaVehiculos {
public:
  Vehiculo* crearVehiculo() const override {
    return new Coche(); // Devuelve instancia de Coche
  }
};

// Factoría concreta: Bicicleta
class FactoriaBicicletas : public FactoriaVehiculos {
public:
  Vehiculo* crearVehiculo() const override {
    return new Bicicleta(); // Devuelve instancia de Bicicleta
  }
};


