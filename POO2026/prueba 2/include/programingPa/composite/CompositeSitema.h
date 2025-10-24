#pragma once
#include "Header.h"
#include"programingPa/composite/Sistema.h"
#include"programingPa/composite/Archivo.h"
#include"programingPa/composite/carpeta.h"
class sistemaArchivo :public  archivo {
	public:
		sistemaArchivo(const std::string& nombreArchivo) : nombre(nombreArchivo) {}
		sistemaArchivo() = default;
		~sistemaArchivo() = default;
		void MostrarInfo() override {
			archivo::MostrarInfo();
			std::cout << "Nombre del archivo: " << nombre << "\n";
		}
private:
	std::string nombre = "archivo docxs";
};

		class sistemaCarpeta :public  carpeta {
		public:
			void agregar(Sistema* sistema) {
				sistemas.push_back(sistema);
			}
			void MostrarInfo() override { 
				carpeta::MostrarInfo();
				for (const auto sistema : sistemas) {
					sistema->MostrarInfo();
				}
			}
		private:
			std::vector<Sistema*> sistemas;
		

}; 