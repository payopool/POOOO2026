#pragma once
#include"Header.h"
#include "DocPrototype.h"

class DocText : public DocPrototype {
public:
	DocText() = default;
  ~DocText() = default;

  DocPrototype* clone() const override {
    DocText* copia = new DocText(*this);
    copia->config(contenido);
    return copia;
  }

  void config(const std::string& _contenido) override {
    contenido = "[Texto] " + _contenido;
  }

  void mostrarCon() const override {
    std::cout << "Contenido: " << contenido << "\n";
  }

private:
  std::string contenido;
};


