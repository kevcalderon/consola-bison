%{
#include <stdio.h>
#include "edd/lista-simpleComando.c"
extern FILE *yyin;
void yyerror(char *s);
%}

%union{

    char *mkdisk;
    char *rmdisk;
    char *fdisk;
    char *mount;
    char *unmount;
    char *mkfs;
    char *login;
    char *logout;
    char *mkgrp;
    char *rmgrp;
    char *mkusr;
    char *rmusr;
    char *chmod;
    char *touch;
    char *mkdir;
    char *rm;
    char *edit;
    char *ren;
    char *cp;
    char *mv;
    char *find;
    char *chown;
    char *chgrp;
    char *recovery;
    char *loss;
    char *exec;
    char *size;
    char *path;
    char *name;
    char *id;
    char *usr;
    char *pwd;
    char *grp;
    char *ugo;
    char *cat;
    char *filen;
    char *stdin;
    char *cont;
    char *dest;
    char *f;
    char *u;
    char *type;
    char *delete;
    char *fs;
    char *r;
    char *p;
    char *add;
    char *interrogacion;
    char *cerradura;
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

%token <mkdisk> TOK_MKDISK
%token <rmdisk> TOK_RMDISK
%token <fdisk> TOK_FDISK
%token <mount> TOK_MOUNT
%token <unmount> TOK_UNMOUNT
%token <mkfs> TOK_MKFS
%token <login> TOK_LOGIN
%token <logout> TOK_LOGOUT
%token <mkgrp> TOK_MKGRP
%token <rmgrp> TOK_RMGRP
%token <mkusr> TOK_MKUSR
%token <rmusr> TOK_RMUSR
%token <chmod> TOK_CHMOD
%token <touch> TOK_TOUCH
%token <mkdir> TOK_MKDIR
%token <rm> TOK_RM
%token <edit> TOK_EDIT
%token <ren> TOK_REN
%token <cp> TOK_CP
%token <mv> TOK_MV
%token <find> TOK_FIND
%token <chown> TOK_CHOWN
%token <chgrp> TOK_CHGRP
%token <recovery> TOK_RECOVERY
%token <loss> TOK_LOSS
%token <exec> TOK_EXEC
%token <size> TOK_SIZE
%token <path> TOK_PATH
%token <name> TOK_NAME
%token <id> TOK_ID
%token <usr> TOK_USR
%token <pwd> TOK_PWD
%token <grp> TOK_GRP
%token <ugo> TOK_UGO
%token <cat> TOK_CAT
%token <filen> TOK_FILEN
%token <stdin> TOK_STDIN
%token <cont> TOK_CONT
%token <dest> TOK_DEST
%token <f> TOK_F
%token <u> TOK_U
%token <type> TOK_TYPE
%token <delete> TOK_DELETE
%token <add> TOK_ADD
%token <fs> TOK_FS
%token <r> TOK_R
%token <p> TOK_P
%token <interrogacion> TOK_INTERROGACION
%token <cerradura> TOK_CERRADURA
%token TOK_IGUAL
%token TOK_SALTO

%type <paramNode> params
%type <comandNode> instruccion
%type <paramList> paramslist
%type <comandList> instrucciones


%start inicio


%%
inicio:     instrucciones{ 
                free($1);
                return 0;
            }
;

instrucciones:  instrucciones instruccion{
                    $1 = obtenerNuevaListaComandos();
                    addComando($1, $2);
                    readComando($1);
                    printf("termina un comando 1\n");
                    $$ = $1;
                    }
                |instruccion{ 
                    ListaComandos* auxComand = obtenerNuevaListaComandos();
                    addComando(auxComand, $1);
                    readComando(auxComand);
                    printf("termina un comando 2\n");
                    $$ = auxComand; 
                }
;

instruccion:        TOK_MKDISK paramslist TOK_SALTO{
                        $$ = getNodeComando($1,$2);
                    }
                    |TOK_RMDISK paramslist TOK_SALTO{
                        $$ = getNodeComando($1,$2);
                    }
                    |TOK_FDISK paramslist TOK_SALTO{
                        $$ = getNodeComando($1,$2);
                    }
                    |TOK_MOUNT paramslist TOK_SALTO{
                        $$ = getNodeComando($1,$2);
                    }
                    |TOK_UNMOUNT paramslist TOK_SALTO{
                        $$ = getNodeComando($1,$2);
                    }
                    |TOK_MKFS paramslist TOK_SALTO{
                        $$ = getNodeComando($1,$2);
                    }
                    |TOK_LOGIN paramslist TOK_SALTO{
                        $$ = getNodeComando($1,$2);
                    }
                    |TOK_LOGOUT{
                        $$ = getNodeComando($1,NULL);
                    }
                    |TOK_MKGRP paramslist TOK_SALTO{
                        $$ = getNodeComando($1,$2);
                    }
                    |TOK_RMGRP paramslist TOK_SALTO{
                        $$ = getNodeComando($1,$2);
                    }
                    |TOK_MKUSR paramslist TOK_SALTO{
                        $$ = getNodeComando($1,$2);
                    }  
                    |TOK_RMUSR paramslist TOK_SALTO{
                        $$ = getNodeComando($1,$2);
                    }
                    |TOK_CHMOD paramslist TOK_SALTO{
                        $$ = getNodeComando($1,$2);
                    }
                    |TOK_TOUCH paramslist TOK_SALTO{
                        $$ = getNodeComando($1,$2);
                    }
                    |TOK_CAT paramslist TOK_SALTO{
                        $$ = getNodeComando($1,$2);
                    }
                    |TOK_RM paramslist TOK_SALTO{
                        $$ = getNodeComando($1,$2);
                    }
                    |TOK_EDIT paramslist TOK_SALTO{
                        $$ = getNodeComando($1,$2);
                    }
                    |TOK_REN paramslist TOK_SALTO{
                        $$ = getNodeComando($1,$2);
                    }
                    |TOK_MKDIR paramslist TOK_SALTO{
                        $$ = getNodeComando($1,$2);
                    }
                    |TOK_CP paramslist TOK_SALTO{
                        $$ = getNodeComando($1,$2);
                    }
                    |TOK_MV paramslist TOK_SALTO{
                        $$ = getNodeComando($1,$2);
                    }
                    |TOK_FIND paramslist TOK_SALTO{
                        $$ = getNodeComando($1,$2);
                    }
                    |TOK_CHOWN paramslist TOK_SALTO{
                        $$ = getNodeComando($1,$2);
                    }
                    |TOK_CHGRP paramslist TOK_SALTO{
                        $$ = getNodeComando($1,$2);
                    }
                    |TOK_RECOVERY paramslist TOK_SALTO{
                        $$ = getNodeComando($1,$2);
                    }
                    |TOK_LOSS paramslist TOK_SALTO{
                        $$ = getNodeComando($1,$2);
                    }
                    |TOK_EXEC paramslist TOK_SALTO{
                        $$ = getNodeComando($1,$2);
                    }
;


paramslist:         paramslist params{
                        $1 = obtenerNuevaListaParametros();
                        addParametros($1, $2);
                        readParametros($1);
                        free($1);
                        $$ = $1;
                    }
                    |params{
                        ListaParametros* auxParamsList = obtenerNuevaListaParametros();
                        addParametros(auxParamsList, $1);
                        readParametros(auxParamsList);
                        //free(auxParamsList);
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
    printf("%s\n" , s);
}

