#pragma once
#include"Header.h"
class productos {
public:

	productos() = default;
	productos(int _peso, std::string nombre, double precio, Fecha fechaCaducidad, std::string marca,
		Fecha fechaCreacion, std::string modelo, std::string descripcion, std::string contenido,int _codigo) : peso(_peso), m_nombre(nombre), m_precio(precio), m_fechaCaducidad(fechaCaducidad),
		m_marca(marca), m_fechaCreacion(fechaCreacion), modelo(modelo), descripcion(descripcion),
		contenido(contenido),m_codigo( _codigo){
	}

	~productos() = default;


	void mostrarinfo(codigo codi) {
		switch (codi) {
		case ALIMENTACION:
			std::cout << "Categoria: ALIMENTACION\n";
			std::cout << "Nombre: " << m_nombre << "\n";
			std::cout << "Peso: " << peso << " gramos\n";
			std::cout << "Precio: $" << m_precio << "\n";
			std::cout << "Fecha de caducidad: " << m_fechaCaducidad.toString() << "\n";
			std::cout << "Marca: " << m_marca << "\n";
			std::cout << "Fecha de creacion: " << m_fechaCreacion.toString() << "\n";
			std::cout << "Contenido: " << contenido << "\n";
			std::cout << "Codigo: " << m_codigo << "\n";
			std::cout << "comestible\n";
			break;
		case ROPA:
			std::cout << "Categoria: ROPA\n";
			std::cout << "Nombre: " << m_nombre << "\n";
			std::cout << "Precio: $" << m_precio << "\n";
			std::cout << "Marca: " << m_marca << "\n";
			std::cout << "Fecha de creacion: " << m_fechaCreacion.toString() << "\n";
			std::cout << "Modelo: " << modelo << "\n";
			std::cout << "Descripcion: " << descripcion << "\n";
			std::cout << "Codigo: " << m_codigo << "\n";
			std::cout << "no comestible\n";
			break;
		case ELECTRONICA:
			std::cout << "Categoria: ELECTRONICA\n";
			std::cout << "Nombre: " << m_nombre << "\n";
			std::cout << "Precio: $" << m_precio << "\n";
			std::cout << "Marca: " << m_marca << "\n";
			std::cout << "Fecha de creacion: " << m_fechaCreacion.toString() << "\n";
			std::cout << "Modelo: " << modelo << "\n";
			std::cout << "Descripcion: " << descripcion << "\n";
			std::cout << "Codigo: " << m_codigo << "\n";
			std::cout << "no comestible\n";
			break;
		case HIGIENE:
			std::cout << "Categoria: HIGIENE\n";
			std::cout << "Nombre: " << m_nombre << "\n";
			std::cout << "Peso: " << peso << " gramos\n";
			std::cout << "Precio: $" << m_precio << "\n";
			std::cout << "Fecha de caducidad: " << m_fechaCaducidad.toString() << "\n";
			std::cout << "Marca: " << m_marca << "\n";
			std::cout << "Fecha de creacion: " << m_fechaCreacion.toString() << "\n";
			std::cout << "Contenido: " << contenido << "\n";
			std::cout << "Codigo: " << m_codigo << "\n";
			std::cout << "no comestible\n";
			break;
		default:
			std::cout << "Categoria no valida\n";
			break;
		}
	}

private:
	int peso;
	std::string m_nombre;
	double m_precio;
	Fecha	m_fechaCaducidad;
	std::string m_marca;
       Fecha m_fechaCreacion;
std::string modelo;
std::string descripcion;
std::string contenido;
int m_codigo;


};

