//estudiante.h
#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H

#include "Asistente.h"

class Estudiante : public Asistente {
private:
    int edad;
    string carrera;

public:
    Estudiante(string nombre, string apellido, string rut, string email, string telefono, int edad, string carrera);
    void mostrarInformacion() override;
};

#endif // ESTUDIANTE_H