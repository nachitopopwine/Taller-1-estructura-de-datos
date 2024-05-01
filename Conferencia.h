#ifndef CONFERENCIA_H
#define CONFERENCIA_H

#include "Evento.h"

class Conferencia : public Evento {
private:
    string tema;
    string orador;

public:
    Conferencia();
    Conferencia(string nombre, string fecha, string hora, string lugar, int duracion, string tema, string orador);

    void mostrarInformacion() override;
    void cargarDesdeArchivo(istream& archivo) override;
    void guardarEnArchivo(ostream& archivo) override;
};

#endif // CONFERENCIA_H