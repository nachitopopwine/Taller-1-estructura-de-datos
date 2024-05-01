//invitadoespecial.cpp
#include "InvitadoEspecial.h"

InvitadoEspecial::InvitadoEspecial(string nombre, string apellido, string rut, string email, string telefono, string ocupacion)
    : Asistente(nombre, apellido, rut, email, telefono), ocupacion(ocupacion) {}

void InvitadoEspecial::mostrarInformacion() {
    Asistente::mostrarInformacion();
    cout << "Ocupación: " << ocupacion << endl;
}
