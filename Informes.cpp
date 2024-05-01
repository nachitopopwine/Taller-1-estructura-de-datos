///informes.cpp
#include "Informes.h"

void Informes::generarInformeGeneral(const vector<Evento*>& eventos) {
    cout << "Lista de eventos programados:" << endl;
    for (const auto& evento : eventos) {
        cout << "- " << evento->getNombre() << endl;
    }
}

void Informes::generarInformeDetallado(const vector<Evento*>& eventos) {
    cout << "Detalles de eventos y lista de asistentes:" << endl;
    for (const auto& evento : eventos) {
        evento->mostrarInformacion();
        cout << "Asistentes:" << endl;
        for (const auto& asistente : evento->getAsistentes()) {
            asistente->mostrarInformacion();
        }
        cout << endl;
    }

    int totalAsistentes = 0;
    for (const auto& evento : eventos) {
        totalAsistentes += evento->getAsistentes().size();
    }
    double asistenciaPromedio = totalAsistentes / static_cast<double>(eventos.size());

    cout << "Estadísticas de asistencia:" << endl;
    cout << "Número total de asistentes: " << totalAsistentes << endl;
    cout << "Asistencia promedio por evento: " << asistenciaPromedio << endl;
}