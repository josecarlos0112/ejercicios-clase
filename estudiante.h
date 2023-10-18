//
// Created by usuario on 16/10/2023.
//

#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H

#include <string>
#include "persona.h"

using namespace std;

class Estudiante : public Persona {
    string grado;

public:
    void setGrado(const string &grado);
    string getGrado();
    void mostrarDetalles();
};

#endif