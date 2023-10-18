//
// Created by usuario on 16/10/2023.
//
#include <iostream>
#include "persona.h"

using namespace std;

void Persona::setNombre(const string &nombre) {
    this->nombre = nombre;
}

string Persona::getNombre() {
    return nombre;
}

void Persona::setEdad(int edad) {
    this->edad = edad;
}

int Persona::getEdad() {
    return edad;
}

void Persona::setGenero(const string &genero) {
    this->genero = genero;
}

string Persona::getGenero() {
    return genero;
}

int main() {
    Persona persona;

    persona.setNombre("Anastacio");
    persona.setEdad(10);
    persona.setGenero("No definido");

    cout << "Nombre: " << persona.getNombre() << endl;
    cout << "Edad: " << persona.getEdad() << endl;
    cout << "Genero: " << persona.getGenero() << endl;

    return 0;
}