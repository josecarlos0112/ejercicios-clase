//
// Created by usuario on 16/10/2023.
//

#ifndef PERSONA_H
#define PERSONA_H

#include <string>

using namespace std;

class Persona {
    //Ponemos los atributos de la persona
    string nombre;
    int edad;
    string genero;

    //Le ponemos los metodos por clase
    public:
        void setNombre(const string &nombre);
        string getNombre();
        void setEdad(int edad);
        int getEdad();
        void setGenero(const string &genero);
        string getGenero();
};

#endif