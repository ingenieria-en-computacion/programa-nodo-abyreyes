#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//Definición de la estructura Nodo
typedef int DATO
typedef struct _Nodo Nodo
struct _Nodo{
    DATO dato;
    Nodo* sig;
};

//CrearNodo
Nodo* crear_nodo(){
    Nodo* nuevo = (Nodo*)malloc(sizeof(Nodo));
    nuevo -> sig = NULL;
    nuevo -> dato = 0;
    return nuevo;
};

//BorrarNodo
bool borrar_nodo(Nodo* n){
    if(n -> sig = NULL){
    free(n);
    return true;
}
return false;
}

//AsignarDato
Nodo* asignar_dato(Nodo* n, DATO d){
    if(n! = NULL){
        n -> dato = d;
    }
    return n;
}

//ObtenerDato
DATO obtener_dato(Nodo* n){
    if(n == NULL){
        printf("No hay datos \n");
        return -1;
    }
    return -> dato;
}

//AsignarRef
Nodo* asignar_ref(Nodo* n, Nodo* e){
    if(n! = NULL){
        n -> sig = e;
    }
    return n;
}

//ObtenerRef
Nodo* obtener_ref(Nodo* n){ 
    if(n!= NULL){
        return n -> sig;
    }
    return NULL;
}
