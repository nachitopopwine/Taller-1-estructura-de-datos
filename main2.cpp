//main2.cpp
#include <iostream>
#include <vector>
#include "Evento.h"
#include "Asistente.h"
#include "EventoFactory.h" // Podría ser útil una factoría para crear eventos según su tipo
#include "DataManager.h"   // Para la gestión de carga y guardado de datos
#include "Estudiante.h" 
#include "Profesional.h"
#include "InvitadoEspecial.h"

using namespace std;

// Función para mostrar el menú principal
void mostrarMenu() {
    cout << "Bienvenido" << endl;
    cout << "Ingrese opción:" << endl;
    cout << "1.- Crear nuevo evento" << endl;
    cout << "2.- Registrar asistentes" << endl;
    cout << "3.- Consultar lista de asistentes" << endl;
    cout << "4.- Generar informe general" << endl;
    cout << "5.- Generar informe detallado" << endl;
    cout << "0.- Salir" << endl;
}

int main() {
    // Se crea un vector para almacenar eventos
    vector<Evento*> eventos;

    // Se carga datos previamente guardados, si existen
    DataManager dataManager;
    dataManager.cargarEventosDesdeArchivo(eventos);

    // Se muestra el menú principal
    while (true) {
        mostrarMenu();

        int opcion;
        cin >> opcion;

        // Se procesa la opción seleccionada
        switch (opcion) {
            case 0:
                // Salir del programa
                cout << "Guardando datos y cerrando el programa..." << endl;
                dataManager.guardarEventosEnArchivo(eventos); // Guardar datos antes de salir
                // Liberar memoria de los eventos y asistentes
                for (auto evento : eventos) {
                    delete evento;
                }
                return 0;

            case 1:
                // Crear un nuevo evento
                cout << "**Crear nuevo evento**" << endl;
                // Utilizar EventoFactory para crear el evento adecuado según el tipo
                Evento* nuevoEvento = EventoFactory::crearEvento();
                eventos.push_back(nuevoEvento);
                break;

            case 2:
    cout << "**Registrar un asistente a un evento**" << endl;
    if (eventos.empty()) {
        cout << "No hay eventos disponibles para registrar asistentes." << endl;
    } else {
        cout << "Seleccione el evento al que desea registrar al asistente:" << endl;
        for (int i = 0; i < eventos.size(); ++i) {
            cout << i + 1 << ". " << eventos[i]->getNombre() << endl;
        }
        int opcionEvento;
        cin >> opcionEvento;
        
        if (opcionEvento < 1 || opcionEvento > eventos.size()) {
            cout << "Opción inválida." << endl;
        } else {
            Evento* eventoSeleccionado = eventos[opcionEvento - 1];
            cout << "Seleccione el tipo de asistente:" << endl;
            cout << "1. Estudiante" << endl;
            cout << "2. Profesional" << endl;
            cout << "3. Invitado Especial" << endl;
            int opcionTipoAsistente;
            cin >> opcionTipoAsistente;

            string nombre, apellido, rut, email, telefono;
            int edad;
            string empresa;
            string ocupacion;
            string carrera;

            cout << "Ingrese nombre: ";
            cin >> nombre;
            cout << "Ingrese apellido: ";
            cin >> apellido;
            cout << "Ingrese RUT: ";
            cin >> rut;
            cout << "Ingrese email: ";
            cin >> email;
            cout << "Ingrese teléfono: ";
            cin >> telefono;

            switch (opcionTipoAsistente) {
                case 1:
                    cout << "Ingrese edad: ";
                    cin >> edad;
                    cout << "Ingrese carrera: ";
                    cin >> carrera;
                    eventoSeleccionado->registrarAsistente(new Estudiante(nombre, apellido, rut, email, telefono, edad, carrera));
                    cout << "Estudiante registrado con éxito en el evento." << endl;
                    break;
                case 2:
                    cout << "Ingrese edad: ";
                    cin >> edad;
                    cout << "Ingrese empresa: ";
                    cin >> empresa;
                    eventoSeleccionado->registrarAsistente(new Profesional(nombre, apellido, rut, email, telefono, edad, empresa));
                    cout << "Profesional registrado con éxito en el evento." << endl;
                    break;
                case 3:
                    cout << "Ingrese ocupación: ";
                    cin >> ocupacion;
                    eventoSeleccionado->registrarAsistente(new InvitadoEspecial(nombre, apellido, rut, email, telefono, ocupacion));
                    cout << "Invitado Especial registrado con éxito en el evento." << endl;
                    break;
                default:
                    cout << "Opción inválida." << endl;
                    break;
            }
        }
    }
    break;

            case 3:
                // Consultar lista de asistentes
                cout << "**Consultar lista de asistentes**" << endl;
                // Implementar la lógica para mostrar la lista de asistentes de un evento
                string nombreEventoConsultar;
                cout << "Ingrese el nombre del evento: ";
                cin >> nombreEventoConsultar;

                // Buscar el evento
                Evento* eventoConsulta = nullptr;
                for (Evento* eventoAux : eventos) {
                    if (eventoAux->getNombre() == nombreEventoConsultar) {
                        eventoConsulta = eventoAux;
                        break;
                    }
                }

                if (eventoConsulta != nullptr) {
                    eventoConsulta->mostrarAsistentes();
                } else {
                    cout << "Evento no encontrado." << endl;
                }
                break;

            case 4:
                cout << "**Generar informe general**" << endl;
                Informes::generarInformeGeneral(eventos);
                break;

            case 5:
                cout << "**Generar informe detallado**" << endl;
                Informes::generarInformeDetallado(eventos);
                break;

            default:
                cout << "Opción no válida. Por favor, seleccione una opción válida." << endl;
                break;
        }
    }

    return 0;
}