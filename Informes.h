//informes.h
#ifndef INFORMES_H
#define INFORMES_H

#include <vector>
#include "Evento.h"
#include "Asistente.h"

class Informes {
public:
    static void generarInformeGeneral(const vector<Evento*>& eventos);
    static void generarInformeDetallado(const vector<Evento*>& eventos);
};

#endif // INFORMES_H