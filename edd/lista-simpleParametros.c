 //* LISTAS LIGADAS
 
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "../structs/Comando.h"
 
 typedef struct paramList{
     int tamano;
     NodoParametro* primerItem;
     NodoParametro* ultimoItem;
 }ListaLigada;
 
 NodoParametro* getNode(char *nombre, char *valor){
     NodoParametro* nodo = (NodoParametro*)malloc(sizeof(NodoParametro));
     nodo->nombre = nombre;
     nodo->valor= valor;
     nodo->siguiente = NULL;
     return nodo;
 }
 
 ListaLigada* obtenerNuevaListaLigada(){
     ListaLigada* ll = (ListaLigada*)malloc(sizeof(ListaLigada));
     ll->tamano=0;
     ll->primerItem = NULL;
     ll->ultimoItem = NULL;
     return ll;
 }
 
 //* Operaciones CRUD
 
 void add(ListaLigada* ll,NodoParametro* nodo){
    if (ll->primerItem == NULL) ll->primerItem = nodo;
    else ll->ultimoItem->siguiente = nodo;
    ll->ultimoItem = nodo;
    ll->tamano++;
 }
 
 void read(ListaLigada* ll){
        NodoParametro* exploradorLista = ll->primerItem;
        int i = 0;
        while (exploradorLista != NULL){
            printf("%s\n", exploradorLista->nombre);
            exploradorLista = exploradorLista->siguiente;
            
        }
 }

  bool search(ListaLigada* ll, char *token){
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
 
 /*void update(ListaLigada* ll, unsigned int indice, int nuevoValor){
     if (ll->tamano && indice<ll->tamano){
         Nodo* exploradorLista = ll->primerItem;
         int i = 0;
         while (i++ < indice)
             exploradorLista = exploradorLista->sig;
         exploradorLista->valor = nuevoValor;
     }
 }
 
void removed(ListaLigada* ll, unsigned int indice){
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
 
     ListaLigada* LISTA = obtenerNuevaListaLigada();
     NodoParametro* a = getNode("-size", "3000");
     NodoParametro* b = getNode("-u", "-k");

 
     add(LISTA,a);
     add(LISTA,b);
 
     read(LISTA);
     free(LISTA);
     return 0;
 }
  }*/