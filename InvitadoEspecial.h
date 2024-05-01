//invitadoespecial.h
#ifndef INVITADO_ESPECIAL_H
#define INVITADO_ESPECIAL_H

#include "Asistente.h"

class InvitadoEspecial : public Asistente {
private:
    string ocupacion;

public:
    InvitadoEspecial(string nombre, string apellido, string rut, string email, string telefono, string ocupacion);
    void mostrarInformacion() override;
};

#endif // INVITADO_ESPECIAL_H