%{
#include <stdio.h>
#include "edd/lista-simpleComando.c"
#include "edd/lista-simpleParametros.c"

extern FILE *yyin;

%}
%union{
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

%token TOK_MKDISK
%token TOK_RMDISK
%token TOK_FDISK
%token TOK_MOUNT
%token TOK_UNMOUNT
%token TOK_MKFS
%token TOK_LOGIN
%token TOK_LOGOUT
%token TOK_MKGRP
%token TOK_RMGRP
%token TOK_MKUSR
%token TOK_RMUSR
%token TOK_CHMOD
%token TOK_TOUCH
%token TOK_MKDIR
%token TOK_RM
%token TOK_EDIT
%token TOK_REN
%token TOK_CP
%token TOK_MV
%token TOK_FIND
%token TOK_CHOWN
%token TOK_CHGRP
%token TOK_RECOVERY
%token TOK_LOSS
%token TOK_EXEC
%token TOK_SIZE
%token TOK_PATH
%token TOK_NAME
%token TOK_ID
%token TOK_USR
%token TOK_PWD
%token TOK_GRP
%token TOK_UGO
%token TOK_CAT
%token TOK_FILEN
%token TOK_STDIN
%token TOK_CONT
%token TOK_DEST
%token TOK_F
%token TOK_U
%token TOK_TYPE
%token TOK_DELETE
%token TOK_ADD
%token TOK_FS
%token TOK_R
%token TOK_P
%token TOK_INTERROGACION
%token TOK_CERRADURA
%token TOK_IGUAL
%token TOK_SALTO



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

                    }
                    |params{

                    }
;

params:             TOK_PATH TOK_IGUAL TOK_RUTA{

                    }
                    |TOK_SIZE TOK_IGUAL TOK_NUMERO{

                    }
                    |TOK_U TOK_IGUAL TOK_UNIDADES{

                    }
                    |TOK_F TOK_IGUAL TOK_AJUSTE{

                    }
                    |TOK_NAME TOK_IGUAL TOK_NOMBRE{

                    }
                    |TOK_TYPE TOK_IGUAL TOK_TIPO{

                    }
                    |TOK_DELETE TOK_IGUAL TOK_CAPACIDAD{

                    }
                    |TOK_ADD TOK_IGUAL TOK_NUMERO{

                    }
                    |TOK_ID TOK_IGUAL TOK_IDENTIFICADOR{

                    }
                    |TOK_TYPE TOK_IGUAL TOK_CAPACIDAD{

                    }
                    |TOK_FS TOK_IGUAL TOK_SISTEMA{

                    }
                    |TOK_USR TOK_IGUAL TOK_NOMBRE{

                    }
                    |TOK_PWD TOK_IGUAL TOK_NOMBRE{

                    }  
                    |TOK_GRP TOK_IGUAL TOK_NOMBRE{

                    }
                    |TOK_UGO TOK_IGUAL TOK_PERMISOS{

                    }
                    |TOK_R{

                    }
                    |TOK_P{

                    }
                    |TOK_STDIN{

                    }
                    |TOK_CONT TOK_IGUAL TOK_RUTA{

                    }
                    |TOK_DEST TOK_IGUAL TOK_RUTA{

                    }
                    |TOK_FILEN TOK_IGUAL TOK_RUTA{

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


