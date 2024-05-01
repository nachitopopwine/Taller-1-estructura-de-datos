//EventoFactory.cpp
#include "EventoFactory.h"
#include "Conferencia.h"
#include "Taller.h"

Evento* EventoFactory::crearEvento() {
    // Pedir al usuario que ingrese el tipo de evento
    string tipo;
    cout << "Ingrese el tipo de evento (Conferencia/Taller): ";
    cin >> tipo;

    // Crear el evento según el tipo
    if (tipo == "Conferencia") {
        return new Conferencia();
    } else if (tipo == "Taller") {
        return new Taller();
    } else {
        cout << "Tipo de evento no válido." << endl;
        return nullptr;
    }
}
