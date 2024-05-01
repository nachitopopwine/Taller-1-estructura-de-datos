//profesional.h
#ifndef PROFESIONAL_H
#define PROFESIONAL_H

#include "Asistente.h"

class Profesional : public Asistente {
private:
    int edad;
    string empresa;

public:
    Profesional(string nombre, string apellido, string rut, string email, string telefono, int edad, string empresa);
    void mostrarInformacion() override;
};

#endif // PROFESIONAL_H