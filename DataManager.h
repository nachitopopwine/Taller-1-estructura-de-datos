//DataManager.h
#ifndef DATA_MANAGER_H
#define DATA_MANAGER_H
/*
Estas líneas de código son directivas de preprocesador en C++ que ayudan a prevenir problemas de inclusión múltiple 
cuando trabajas con archivos de encabezado (.h). Aquí está su función:

#ifndef DATA_MANAGER_H: Esta línea comprueba si el símbolo DATA_MANAGER_H no está definido. Si no está definido, significa 
que este archivo de encabezado (DataManager.h en este caso) no ha sido incluido previamente en el programa.

#define DATA_MANAGER_H: Si el símbolo DATA_MANAGER_H no está definido, esta línea lo define. Esto asegura que si el archivo 
de encabezado es incluido posteriormente en el programa, el contenido dentro de este bloque #ifndef sea incluido.
Cuando un archivo de encabezado se incluye en un archivo de código fuente (.cpp), estas líneas se utilizan para prevenir la inclusión
 múltiple del mismo archivo de encabezado en un mismo archivo de código fuente. Esto es importante para evitar conflictos de redefinición
  de clases, funciones, variables, etc.

Por lo tanto, estas líneas #ifndef, #define y #endif crean lo que se conoce como un "include guard" (o guardia de inclusión). 
Ayudan a asegurar que el contenido del archivo de encabezado se incluya solo una vez en un solo archivo de código fuente durante la compilación.*/
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include "Evento.h"
#include "Evento.h"

class DataManager {
public:
    static void cargarEventosDesdeArchivo(vector<Evento*>& eventos);
    static void guardarEventosEnArchivo(const vector<Evento*>& eventos);
};

#endif // DATA_MANAGER_H
/*
La línea #endif simplemente marca el final del bloque condicional que comenzó con #ifndef.
Cuando el preprocesador encuentra #ifndef, verifica si el símbolo dado (en este caso DATA_MANAGER_H) no está definido. 
Si el símbolo no está definido, el preprocesador incluirá el código entre #ifndef y #endif.

Luego, si el símbolo no está definido, el preprocesador ejecuta la línea #define para definir el símbolo y evitar que 
el código contenido en el bloque se vuelva a incluir si este archivo se incluye en otro lugar más tarde.

Finalmente, #endif simplemente indica el final del bloque condicional. Después de eso, el preprocesador continúa con el resto 
del código en el archivo de encabezado.

En resumen, #endif marca el final del bloque condicional creado por #ifndef.
*/