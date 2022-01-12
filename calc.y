%{
#include <stdio.h>
#include "edd/lista-simpleComando.c"
#include "edd/lista-simpleParametros.c"

extern FILE *yyin;

//INSTANCIAR LAS LISTAS

#define LISTACOMANDS obtenerNuevaListaComandos();

%}
%union{
    char *comando;
    char *parametro;
    char *numero;
    char *ajuste;
    char *ruta;
    char *unidades;
    char *tipo;
    char *nombre;
    char *capacidad;
    char *sistema;
    char *permisos;
    char *identificador;
    struct NodoParametro *paramNode;
    struct NodoComando *comandNode;
    struct ListaComandos *comandList;
    struct ListaParametros *paramList;
}
%token <numero> TOK_NUMERO
%token <ajuste>TOK_AJUSTE
%token <ruta>TOK_RUTA
%token <unidades>TOK_UNIDADES
%token <tipo>TOK_TIPO
%token <nombre>TOK_NOMBRE
%token <capacidad>TOK_CAPACIDAD
%token <sistema>TOK_SISTEMA
%token <permisos>TOK_PERMISOS
%token <identificador>TOK_IDENTIFICADOR

%token <comando> TOK_MKDISK
%token <comando> TOK_RMDISK
%token <comando> TOK_FDISK
%token <comando> TOK_MOUNT
%token <comando> TOK_UNMOUNT
%token <comando> TOK_MKFS
%token <comando> TOK_LOGIN
%token <comando> TOK_LOGOUT
%token <comando> TOK_MKGRP
%token <comando> TOK_RMGRP
%token <comando> TOK_MKUSR
%token <comando> TOK_RMUSR
%token <comando> TOK_CHMOD
%token <comando> TOK_TOUCH
%token <comando> TOK_MKDIR
%token <comando> TOK_RM
%token <comando> TOK_EDIT
%token <comando> TOK_REN
%token <comando> TOK_CP
%token <comando> TOK_MV
%token <comando> TOK_FIND
%token <comando> TOK_CHOWN
%token <comando> TOK_CHGRP
%token <comando> TOK_RECOVERY
%token <comando> TOK_LOSS
%token <comando> TOK_EXEC
%token <parametro> TOK_SIZE
%token <parametro> TOK_PATH
%token <parametro> TOK_NAME
%token <parametro> TOK_ID
%token <parametro> TOK_USR
%token <parametro> TOK_PWD
%token <parametro> TOK_GRP
%token <parametro> TOK_UGO
%token <parametro> TOK_CAT
%token <parametro> TOK_FILEN
%token <parametro> TOK_STDIN
%token <parametro> TOK_CONT
%token <parametro> TOK_DEST
%token <parametro> TOK_F
%token <parametro> TOK_U
%token <parametro> TOK_TYPE
%token <parametro> TOK_DELETE
%token <parametro> TOK_ADD
%token <parametro> TOK_FS
%token <parametro> TOK_R
%token <parametro> TOK_P
%token <parametro> TOK_INTERROGACION
%token <parametro> TOK_CERRADURA
%token TOK_IGUAL
%token TOK_SALTO

%type <paramNode> params
%type <comandNode> instruccion
%type <paramList> paramslist


%start inicio


%%
inicio:   instruccion { printf("el comando funciona");}
;

instruccion:        TOK_MKDISK paramslist TOK_SALTO{

                    }
                    |TOK_RMDISK paramslist TOK_SALTO{

                    }
                    |TOK_FDISK paramslist TOK_SALTO{

                    }
                    |TOK_MOUNT paramslist TOK_SALTO{

                    }
                    |TOK_UNMOUNT paramslist TOK_SALTO{

                    }
                    |TOK_MKFS paramslist TOK_SALTO{

                    }
                    |TOK_LOGIN paramslist TOK_SALTO{

                    }
                    |TOK_LOGOUT{

                    }
                    |TOK_MKGRP paramslist TOK_SALTO{

                    }
                    |TOK_RMGRP paramslist TOK_SALTO{

                    }
                    |TOK_MKUSR paramslist TOK_SALTO{

                    }  
                    |TOK_RMUSR paramslist TOK_SALTO{

                    }
                    |TOK_CHMOD paramslist TOK_SALTO{

                    }
                    |TOK_TOUCH paramslist TOK_SALTO{

                    }
                    |TOK_CAT paramslist TOK_SALTO{

                    }
                    |TOK_RM paramslist TOK_SALTO{

                    }
                    |TOK_EDIT paramslist TOK_SALTO{

                    }
                    |TOK_REN paramslist TOK_SALTO{

                    }
                    |TOK_MKDIR paramslist TOK_SALTO{

                    }
                    |TOK_CP paramslist TOK_SALTO{

                    }
                    |TOK_MV paramslist TOK_SALTO{

                    }
                    |TOK_FIND paramslist TOK_SALTO{

                    }
                    |TOK_CHOWN paramslist TOK_SALTO{

                    }
                    |TOK_CHGRP paramslist TOK_SALTO{

                    }
                    |TOK_RECOVERY paramslist TOK_SALTO{

                    }
                    |TOK_LOSS paramslist TOK_SALTO{

                    }
                    |TOK_EXEC paramslist TOK_SALTO{

                    }
;


paramslist:         params paramslist{
                        $2 = obtenerNuevaListaParametros();
                        addParametros($2, $1);
                        $$ = $2;
                    }
                    |params{
                        ListaParametros* auxParamsList = obtenerNuevaListaParametros();
                        addParametros(auxParamsList, $1);
                        $$ = auxParamsList;
                    }
;

params:             TOK_PATH TOK_IGUAL TOK_RUTA{
                        $$ = getNodeParametros($1, $3);
                    }
                    |TOK_SIZE TOK_IGUAL TOK_NUMERO{
                        $$ = getNodeParametros($1, $3);
                    }
                    |TOK_U TOK_IGUAL TOK_UNIDADES{
                        $$ = getNodeParametros($1, $3);
                    }
                    |TOK_F TOK_IGUAL TOK_AJUSTE{
                        $$ = getNodeParametros($1, $3);
                    }
                    |TOK_NAME TOK_IGUAL TOK_NOMBRE{
                        $$ = getNodeParametros($1, $3);
                    }
                    |TOK_TYPE TOK_IGUAL TOK_TIPO{
                        $$ = getNodeParametros($1, $3);
                    }
                    |TOK_DELETE TOK_IGUAL TOK_CAPACIDAD{
                        $$ = getNodeParametros($1, $3);
                    }
                    |TOK_ADD TOK_IGUAL TOK_NUMERO{
                        $$ = getNodeParametros($1, $3);
                    }
                    |TOK_ID TOK_IGUAL TOK_IDENTIFICADOR{
                        $$ = getNodeParametros($1, $3);
                    }
                    |TOK_TYPE TOK_IGUAL TOK_CAPACIDAD{
                        $$ = getNodeParametros($1, $3);
                    }
                    |TOK_FS TOK_IGUAL TOK_SISTEMA{
                        $$ = getNodeParametros($1, $3);
                    }
                    |TOK_USR TOK_IGUAL TOK_NOMBRE{
                        $$ = getNodeParametros($1, $3);
                    }
                    |TOK_PWD TOK_IGUAL TOK_NOMBRE{
                        $$ = getNodeParametros($1, $3);
                    }  
                    |TOK_GRP TOK_IGUAL TOK_NOMBRE{
                        $$ = getNodeParametros($1, $3);
                    }
                    |TOK_UGO TOK_IGUAL TOK_PERMISOS{
                        $$ = getNodeParametros($1, $3);
                    }
                    |TOK_R{
                        $$ = getNodeParametros($1, NULL);
                    }
                    |TOK_P{
                        $$ = getNodeParametros($1, NULL);
                    }
                    |TOK_STDIN{
                        $$ = getNodeParametros($1, NULL);
                    }
                    |TOK_CONT TOK_IGUAL TOK_RUTA{
                        $$ = getNodeParametros($1, $3);
                    }
                    |TOK_DEST TOK_IGUAL TOK_RUTA{
                        $$ = getNodeParametros($1, $3);
                    }
                    |TOK_FILEN TOK_IGUAL TOK_RUTA{
                        $$ = getNodeParametros($1, $3);
                    }
;


%%
int main(){
    FILE *file = fopen("entrada.txt", "r");
    yyin = file;
    yyparse();
    fclose(yyin);
}

void yyerror(char* s){
    fprintf(stderr, "%s\n" , s);
}


