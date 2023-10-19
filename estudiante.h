//
// Created by usuario on 16/10/2023.
//

#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H

#include <string>
#include "persona.h"


class Estudiante : public Persona {
    std::string grado;

public:
    void setGrado(const string &grado);
    std::string getGrado();
    void mostrarDetalles();
};


#endif