//profesional.cpp
#include "Profesional.h"

Profesional::Profesional(string nombre, string apellido, string rut, string email, string telefono, int edad, string empresa)
    : Asistente(nombre, apellido, rut, email, telefono), edad(edad), empresa(empresa) {}

void Profesional::mostrarInformacion() {
    Asistente::mostrarInformacion();
    cout << "Edad: " << edad << endl;
    cout << "Empresa: " << empresa << endl;
}