#pragma once
#include "Header.h"
class Estudiante {
public:
    Estudiante() = default;
    ~Estudiante() = default;
 
    void esturiante(const std::string& name, int edad) {
        m_name = name;
        m_edad = edad;
    
    }

private:
    std::string m_name;
    int m_edad;
};