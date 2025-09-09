#pragma once
#include"header.h"
class Rectangulo {
public:
    Rectangulo(double ancho, double altura) : m_ancho(ancho), m_altura(altura) {};
    ~Rectangulo() = default;

    double area() const {
        return m_ancho * m_altura;
    }

    double perimetro() const {
        return 2 * (m_ancho + m_altura);
    }

    double getAncho() const {
        return m_ancho;
    }

    double getAltura() const {
        return m_altura;
    }

private:
    double m_ancho;
    double m_altura;
};
