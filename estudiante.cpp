//
// Created by usuario on 16/10/2023.
//
#include <iostream>
#include "estudiante.h"

using namespace std;

void Estudiante::setGrado(const string &grado) {
    this->grado = grado;
}

string Estudiante::getGrado() {
    return grado;
}

void Estudiante::mostrarDetalles() {
    cout << "Nombre: " << getNombre() << endl;
    cout << "Edad: " << getEdad() << endl;
    cout << "Genero: " << getGenero() << endl;
    cout << "Grado: " << grado << endl;
}

int main() {
    Estudiante miEstudiante;
    miEstudiante.setNombre("Anastacio");
    miEstudiante.setEdad(10);
    miEstudiante.setGenero("No definido");
    miEstudiante.setGrado("Secundaria");

    miEstudiante.mostrarDetalles();

    return 0;
}