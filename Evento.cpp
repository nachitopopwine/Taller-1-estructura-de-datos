// Evento.cpp
#include "Evento.h"

Evento::Evento(string nombre, string tipo, string fecha, string hora, string lugar, int duracion)
    : nombre(nombre), tipo(tipo), fecha(fecha), hora(hora), lugar(lugar), duracion(duracion) {}

Evento::~Evento() {
    // Liberar memoria de los asistentes
    for (auto asistente : asistentes) {
        delete asistente;
    }
}

string Evento::getNombre() { return nombre; }
string Evento::getTipo() { return tipo; }
string Evento::getFecha() { return fecha; }
string Evento::getHora() { return hora; }
string Evento::getLugar() { return lugar; }
int Evento::getDuracion() { return duracion; }

void Evento::agregarAsistente(Asistente* asistente) {
    asistentes.push_back(asistente);
}