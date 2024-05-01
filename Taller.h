//Taller.h
#ifndef TALLER_H
#define TALLER_H

#include "Evento.h"

class Taller : public Evento {
private:
    string tema;
    int cupoMaximo;

public:
    Taller();
    Taller(string nombre, string fecha, string hora, string lugar, int duracion, string tema, int cupoMaximo);

    void mostrarInformacion() override;
    void cargarDesdeArchivo(istream& archivo) override;
    void guardarEnArchivo(ostream& archivo) override;
};

#endif // TALLER_H