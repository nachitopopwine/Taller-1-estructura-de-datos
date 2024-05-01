//estudiante.cpp
#include "Estudiante.h"

Estudiante::Estudiante(string nombre, string apellido, string rut, string email, string telefono, int edad, string carrera)
    : Asistente(nombre, apellido, rut, email, telefono), edad(edad), carrera(carrera) {}

void Estudiante::mostrarInformacion() {
    Asistente::mostrarInformacion();
    cout << "Edad: " << edad << endl;
    cout << "Carrera: " << carrera << endl;
}