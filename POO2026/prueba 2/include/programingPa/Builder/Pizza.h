#pragma once
#include"Header.h"
enum INGREDIENTES { masa = 1, salsa = 2, queso = 3, pepperoni = 4, jamon = 5, pina = 6 , albaca =7, aceite= 8  };


class Pizza {
public:
  Pizza() = default;
  ~Pizza() = default;

  void addIngrediente(INGREDIENTES ingrediente) {
    ingredientes.push_back(ingrediente);
  }

  void show() {
    std::cout << "Pizza con ingredientes: ";
    for (const auto& ingrediente : ingredientes) {
      switch (ingrediente) {
      case masa:
        std::cout << "masa \n "; 
        break;
      case salsa: 
        std::cout << "salsa tomate \n"; 
        break;
      case queso: 
        std::cout << "queso \n";
        break;
      case pepperoni: 
        std::cout << "pepperoni  \n";
        break;
      case jamon:
        std::cout << "jamon \n";
        break;
      case pina:
        std::cout << "pina \n "; 
        break;
      default: 
        break;
      }
    }
    std::cout << "\n";
  }

private:
  std::vector<INGREDIENTES> ingredientes;
};
