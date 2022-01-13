 //* LISTAS LIGADAS

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> 

typedef struct Comando{
    char *nombre;
    struct ListaParametros *paramList;
    struct Comando *siguiente;
}NodoComando;

typedef struct comandList{
    int tamano;
    NodoComando* primerItem;
    NodoComando* ultimoItem;
}ListaComandos;

NodoComando* getNodeComando(char *nombre, struct ListaParametros *ll){
    NodoComando* nodo = (NodoComando*)malloc(sizeof(NodoComando));
    nodo->nombre = nombre;
    nodo->paramList = ll;
    nodo->siguiente = NULL;
    return nodo;
}

ListaComandos* obtenerNuevaListaComandos(){
    ListaComandos* ll = (ListaComandos*)malloc(sizeof(ListaComandos));
    ll->tamano=0;
    ll->primerItem = NULL;
    ll->ultimoItem = NULL;
    return ll;
}

//* Operaciones CRUD

void addComando(ListaComandos* ll,NodoComando* nodo){
    if (ll->primerItem == NULL){
        ll->primerItem = nodo;
    } 
    else {
        ll->ultimoItem->siguiente = nodo;
    }
    ll->ultimoItem = nodo;
    ll->tamano++;
}

void readComando(ListaComandos* ll){
    NodoComando* exploradorLista = ll->primerItem;
    while (exploradorLista != NULL){
        printf("%s ", exploradorLista->nombre);
        exploradorLista = exploradorLista->siguiente;
    }
}

bool searchComando(ListaComandos* ll, char *token){
    NodoComando* exploradorLista = ll->primerItem;
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
    if (ll->primerItem == NULL){
        ll->primerItem = nodo;
    } 
    else{
        ll->ultimoItem->siguiente = nodo;
    } 
    ll->ultimoItem = nodo;
    ll->tamano++;
}
 
void readParametros(ListaParametros* ll){
    NodoParametro* exploradorLista = ll->primerItem;
    while (exploradorLista != NULL){
        printf("%s = %s ", exploradorLista->nombre, exploradorLista->valor);
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
/* 
void update(ListaComandos* ll, unsigned int indice, int nuevoValor){
    if (ll->tamano && indice<ll->tamano){
        NodoComando* exploradorLista = ll->primerItem;
        int i = 0;
        while (i++ < indice)
            exploradorLista = exploradorLista->sig;
        exploradorLista->valor = nuevoValor;
    }
}
 
void removed(ListaComandos* ll, unsigned int indice){
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
 }


 int main(){
     
    struct parametros *pram1;
    

     ListaComandos* LISTA = obtenerNuevaListaComandos();
     NodoComando* a = getNode("mkdisk", pram1);
     NodoComando* b = getNode("rmdisk", pram1);
 
     add(LISTA,a);
     add(LISTA,b);
 
     read(LISTA);
     //update(LISTA,3,11);
     //printf("%s\n",read(LISTA,1)->nombre);
     //printf("%d",read(LISTA,0)->nombre);
     //removed(LISTA,0);
     //printf("\n%d",read(LISTA,0)->nombre);
 
     free(LISTA);
     return 0;
 }
 */