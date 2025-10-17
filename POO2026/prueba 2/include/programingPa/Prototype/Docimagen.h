#pragma once
#include"Header.h"
#include"Docprototype.h"
class Docimagen : public DocPrototype {
public:
  Docimagen() = default;
  ~Docimagen() = default;

  DocPrototype* clone() const override {
    Docimagen* copia = new Docimagen(*this);
    copia->config(contenido);
    return copia;
  }

  void config(const std::string& _contenido) override {
    contenido = "[] " + _contenido;
  }

  void mostrarCon() const override {
    std::cout << "Contenido: " << contenido << "\n";
  }

private:
  std::string contenido;
};
