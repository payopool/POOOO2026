#pragma once
#pragma once
#include"Header.h"
#include "RegistroActividad.h"

class MiSingleton {
private:
  MiSingleton() : data(0) {
    RegistroActividad::getInstancia().agregarActividad("MiSingleton creado");
  }

public:
  static MiSingleton* getInstancia() {
    if (instancia == nullptr) {
      instancia = new MiSingleton();
      RegistroActividad::getInstancia().agregarActividad("Instancia de MiSingleton generada");
    }
    return instancia;
  }

  void setData(int value) {
    data = value;
    RegistroActividad::getInstancia().agregarActividad("Dato actualizado a " + std::to_string(value));
  }

  int getData() const {
    return data;
  }

private:
  static MiSingleton* instancia;
  int data;
};
