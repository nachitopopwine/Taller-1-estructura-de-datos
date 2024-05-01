//asistente.cpp
#include "Asistente.h"

Asistente::Asistente(string nombre, string apellido, string rut, string email, string telefono)
    : nombre(nombre), apellido(apellido), rut(rut), email(email), telefono(telefono) {}

Asistente::~Asistente() {}

void Asistente::mostrarInformacion() {
    cout << "Nombre: " << nombre << " " << apellido << endl;
    cout << "RUT: " << rut << endl;
    cout << "Email: " << email << endl;
    cout << "Telefono: " << telefono << endl;
}

string Asistente::getNombre() { return nombre; }
string Asistente::getApellido() { return apellido; }
string Asistente::getRut() { return rut; }
string Asistente::getEmail() { return email; }
string Asistente::getTelefono() { return telefono; }
