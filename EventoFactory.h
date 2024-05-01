//EventoFactory.h
#ifndef EVENTO_FACTORY_H
#define EVENTO_FACTORY_H

#include "Evento.h"

class EventoFactory {
public:
    static Evento* crearEvento();
};

#endif // EVENTO_FACTORY_H
