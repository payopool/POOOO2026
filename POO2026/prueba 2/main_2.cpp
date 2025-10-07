#include "Header.h"
#include "programingPa/MiSingleton.h"
MiSingleton* MiSingleton::instancia = nullptr;

int main() {
  MiSingleton* singleton = MiSingleton::getInstancia();
  singleton->setData(42);
  std::cout << "Data 1: " << singleton->getData() << "\n";

  MiSingleton* singleton2 = MiSingleton::getInstancia();
  singleton->setData(100);
  std::cout << "Data 2: " << singleton2->getData() << "\n";

  // Mostrar el registro de actividades al final
  RegistroActividad::getInstancia().mostrarActividades();

  return 0;
}