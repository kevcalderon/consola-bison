typedef struct Comando
{
    char *nombre;
    struct parametros *paramList;
    struct Comando *siguiente;
}NodoComando;

typedef struct parametros
{
    char *nombre;
    char *valor;
    struct parametros *siguiente;
}NodoParametro;

