
#include <iostream>
#include "persona.h"
#include "estudiante.h"

using namespace std;

int suma(int a, int b) {
    return a + b;
}
int g = 20;
int main() {
    std::cout << "Hola Mundo" << std::endl;
    std::cout << "La suma es: " << suma(5, 3) << std::endl;
    std::cout << "Valor de g antes de la funcion suma: " << g << std::endl;
    std::cout << "La suma es: " << suma(5, g) << std::endl;
    std::cout << "Valor de g despues de la funcion suma: " << g << std::endl;

    Persona persona;

    persona.setNombre("Anastacio");
    persona.setEdad(10);
    persona.setGenero("No definido");

    cout << "Nombre: " << persona.getNombre() << endl;
    cout << "Edad: " << persona.getEdad() << endl;
    cout << "Genero: " << persona.getGenero() << endl;

    Estudiante miEstudiante;
    miEstudiante.setNombre("Anastacio");
    miEstudiante.setEdad(10);
    miEstudiante.setGenero("No definido");
    miEstudiante.setGrado("Secundaria");

    miEstudiante.mostrarDetalles();

    return 0;
}

