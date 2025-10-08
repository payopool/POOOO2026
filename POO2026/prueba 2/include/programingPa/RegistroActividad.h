#pragma once
#include "Header.h"

class RegistroActividad {
private:
  std::vector<std::string> actividades;

  // Constructor privado
  RegistroActividad() = default;

public:
  // Método estático para obtener la instancia única
  static RegistroActividad& getInstancia() {
    static RegistroActividad instancia;
    return instancia;
  }

  void agregarActividad(const std::string& actividad) {
    actividades.push_back(actividad);
  }

  void mostrarActividades() const {
    std::cout << "Registro de Actividades:\n";
    for (const auto& actividad : actividades) {
      std::cout << "- " << actividad << "\n";
    }
  }

  // Eliminar copias
  RegistroActividad(const RegistroActividad&) = delete;
  RegistroActividad& operator=(const RegistroActividad&) = delete;
};