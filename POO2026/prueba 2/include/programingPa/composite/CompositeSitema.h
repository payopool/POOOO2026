#pragma once
#include "Header.h"
#include"programingPa/composite/Sistema.h"
#include"programingPa/composite/Archivo.h"
#include"programingPa/composite/carpeta.h"
class sistemaArchivo :public virtual archivo {
	public:
		void MostrarInfo() override {
			archivo::MostrarInfo();
		}
};


		class sistemaCarpeta :public virtual carpeta {
		public:
			void agregar(Sistema* sistema) {
				sistemas.push_back(sistema);
			}
			void MostrarInfo() override {
				carpeta::MostrarInfo();
				for (auto sistema : sistemas) {
					sistema->MostrarInfo();
				}
			}
		private:
			std::vector<Sistema*> sistemas;


}; 