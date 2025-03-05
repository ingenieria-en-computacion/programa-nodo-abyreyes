#ifndef CONJUNTO_H
#define CONJUNTO_H

#include <stdbool.h>

// Definición de la estructura Nodo
typedef int DATO;
typedef struct _Nodo Nodo;
struct  _Nodo {
    DATO dato;
    Nodo* sig;
};

// Prototipos de funciones
Nodo* crear_nodo();
bool borrar_nodo(Nodo* n);
void asignar_dato(Nodo* n, DATO d);
int obtener_dato(Nodo* n);
void asignar_ref(Nodo* n, Nodo* e);
Nodo* obtener_ref(Nodo* n);

#endif // CONJUNTO_H
