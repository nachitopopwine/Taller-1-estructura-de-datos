// Evento.h
#pragma once
#include <iostream>
#include <vector>
#include "Asistente.h"

class Evento {
protected:
    string nombre;
    string tipo;
    string fecha;
    string hora;
    string lugar;
    int duracion;
    vector<Asistente*> asistentes;

public:
    Evento(string nombre, string tipo, string fecha, string hora, string lugar, int duracion);
    virtual ~Evento();

    virtual void mostrarInformacion() = 0;

    string getNombre();
    string getTipo();
    string getFecha();
    string getHora();
    string getLugar();
    int getDuracion();
    void agregarAsistente(Asistente* asistente);
};