 //* LISTAS LIGADAS
 
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct parametros{
    char *nombre;
    char *valor;
    struct parametros *siguiente;
}NodoParametro;

typedef struct paramList{
    int tamano;
    NodoParametro* primerItem;
    NodoParametro* ultimoItem;
}ListaParametros;
 
NodoParametro* getNodeParametros(char *nombre, char *valor){
    NodoParametro* nodo = (NodoParametro*)malloc(sizeof(NodoParametro));
    nodo->nombre = nombre;
    nodo->valor= valor;
    nodo->siguiente = NULL;
    return nodo;
}
 
ListaParametros* obtenerNuevaListaParametros(){
    ListaParametros* ll = (ListaParametros*)malloc(sizeof(ListaParametros));
    ll->tamano=0;
    ll->primerItem = NULL;
    ll->ultimoItem = NULL;
    return ll;
}
 
 //* Operaciones CRUD
 
void addParametros(ListaParametros* ll,NodoParametro* nodo){
    if (ll->primerItem == NULL) ll->primerItem = nodo;
    else ll->ultimoItem->siguiente = nodo;
    ll->ultimoItem = nodo;
    ll->tamano++;
}
 
void readParametros(ListaParametros* ll){
    NodoParametro* exploradorLista = ll->primerItem;
    while (exploradorLista != NULL){
        printf("%s\n", exploradorLista->nombre);
        exploradorLista = exploradorLista->siguiente;
        
    }
}

bool searchParametros(ListaParametros* ll, char *token){
    NodoParametro* exploradorLista = ll->primerItem;
    bool bandera = false;
    while (exploradorLista != NULL){
        if(token == exploradorLista->nombre){
            //printf("%s\n", exploradorLista->nombre);
            bandera = true;
        }
        exploradorLista = exploradorLista->siguiente;
    }
    return bandera;
}
 
 /*void update(ListaParametros* ll, unsigned int indice, int nuevoValor){
     if (ll->tamano && indice<ll->tamano){
         Nodo* exploradorLista = ll->primerItem;
         int i = 0;
         while (i++ < indice)
             exploradorLista = exploradorLista->sig;
         exploradorLista->valor = nuevoValor;
     }
 }
 
void removed(ListaParametros* ll, unsigned int indice){
     if (ll->tamano && indice<ll->tamano){
         Nodo* aux;
         if (indice == 0){
             aux = ll->primerItem;
             ll->primerItem = ll->primerItem->sig;
             free(aux);
         } else {
             Nodo* exploradorLista = ll->primerItem;
             int i = 0;
             while (i++ < indice-1)
                 exploradorLista = exploradorLista->sig;
             aux = exploradorLista->sig;
             if (indice == ll->tamano-1){
                 exploradorLista->sig = NULL;
                 ll->ultimoItem = exploradorLista;
             } else exploradorLista->sig = exploradorLista->sig->sig;
         }
         free(aux);
         ll->tamano--;
     }

 
 
 int main(){
 
     ListaParametros* LISTA = obtenerNuevaListaParametros();
     NodoParametro* a = getNode("-size", "3000");
     NodoParametro* b = getNode("-u", "-k");

 
     add(LISTA,a);
     add(LISTA,b);
 
     read(LISTA);
     free(LISTA);
     return 0;
 }
  }*/