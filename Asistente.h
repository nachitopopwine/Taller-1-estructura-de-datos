// Asistente.h
#ifndef ASISTENTE_H
#define ASISTENTE_H
#include <iostream>
#include <string>

class Asistente {
protected:
    string nombre;
    string apellido;
    string rut;
    string email;
    string telefono;

public:
    Asistente(string nombre, string apellido, string rut, string email, string telefono);
    virtual ~Asistente();

    virtual void mostrarInformacion();

    string getNombre();
    string getApellido();
    string getRut();
    string getEmail();
    string getTelefono();
};

#endif // ASISTENTE_H