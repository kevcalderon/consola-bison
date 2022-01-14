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


NodoComando* getNodeComando(char *nombre, struct ListaParametros *ll);
ListaComandos* obtenerNuevaListaComandos();
NodoParametro* getNodeParametros(char *nombre, char *valor);
ListaParametros* obtenerNuevaListaParametros();
void readParametros(ListaParametros* ll);
