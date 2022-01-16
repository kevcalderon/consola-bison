%{
#include <stdio.h>
extern FILE *yyin;
void yyerror(char *s);
int yylex();
%}

%union{
    char *entrada;
}

%token <entrada> TOK_NUMERO
%token <entrada> TOK_AJUSTE
%token <entrada> TOK_RUTA
%token <entrada> TOK_UNIDADES
%token <entrada> TOK_TIPO
%token <entrada> TOK_NOMBRE
%token <entrada> TOK_CAPACIDAD
%token <entrada> TOK_SISTEMA
%token <entrada> TOK_IDENTIFICADOR

%token <entrada> TOK_MKDISK
%token <entrada> TOK_RMDISK
%token <entrada> TOK_FDISK
%token <entrada> TOK_MOUNT
%token <entrada> TOK_UNMOUNT
%token <entrada> TOK_MKFS
%token <entrada> TOK_LOGIN
%token <entrada> TOK_LOGOUT
%token <entrada> TOK_MKGRP
%token <entrada> TOK_RMGRP
%token <entrada> TOK_MKUSR
%token <entrada> TOK_RMUSR
%token <entrada> TOK_CHMOD
%token <entrada> TOK_TOUCH
%token <entrada> TOK_MKDIR
%token <entrada> TOK_RM
%token <entrada> TOK_EDIT
%token <entrada> TOK_REN
%token <entrada> TOK_CP
%token <entrada> TOK_MV
%token <entrada> TOK_FIND
%token <entrada> TOK_CHOWN
%token <entrada> TOK_CHGRP
%token <entrada> TOK_RECOVERY
%token <entrada> TOK_LOSS
%token <entrada> TOK_EXEC
%token <entrada> TOK_SIZE
%token <entrada> TOK_PATH
%token <entrada> TOK_NAME
%token <entrada> TOK_ID
%token <entrada> TOK_USR
%token <entrada> TOK_PWD
%token <entrada> TOK_GRP
%token <entrada> TOK_UGO
%token <entrada> TOK_CAT
%token <entrada> TOK_FILEN
%token <entrada> TOK_STDIN
%token <entrada> TOK_CONT
%token <entrada> TOK_DEST
%token <entrada> TOK_F
%token <entrada> TOK_U
%token <entrada> TOK_TYPE
%token <entrada> TOK_DELETE
%token <entrada> TOK_ADD
%token <entrada> TOK_FS
%token <entrada> TOK_R
%token <entrada> TOK_P
%token <entrada> TOK_IGUAL

%token TOK_SALTO



%start inicio


%%
inicio:     instrucciones{
                
            }
;

instrucciones:  instrucciones instruccion{
                    printf("Analisis exitoso\n");
                    }
                |instruccion{ 
                    printf("Analisis exitoso \n"); 
                }
                |error
;

instruccion:        TOK_MKDISK paramslist1 TOK_SALTO{
                        printf("comando mkdisk\t");
                    }
                    |TOK_RMDISK paramslist2 TOK_SALTO{
                        printf("comando rmdisk\t");
                    }
                    |TOK_FDISK paramslist3 TOK_SALTO{
                        printf("comando fdisk\t");
                    }
                    |TOK_MOUNT paramslist4 TOK_SALTO{
                        printf("comando mount\t");
                    }
                    |TOK_UNMOUNT paramslist5 TOK_SALTO{
                        printf("comando unmount\t");
                    }
                    |TOK_MKFS paramslist6 TOK_SALTO{
                        printf("comando mkfs\t");
                    }
                    |TOK_LOGIN paramslist7 TOK_SALTO{
                        printf("comando login\t");
                    }
                    |TOK_LOGOUT{
                        printf("comando logout\t");
                    }
                    |TOK_MKGRP paramslist8 TOK_SALTO{
                        printf("comando mkgrp\t");
                    }
                    |TOK_RMGRP paramslist9 TOK_SALTO{
                        printf("comando rmgrp\t");
                    }
                    |TOK_MKUSR paramslist10 TOK_SALTO{
                        printf("comando mkusr\t");
                    }  
                    |TOK_RMUSR paramslist11 TOK_SALTO{
                        printf("comando rmusr\t");
                    }
                    |TOK_CHMOD paramslist12 TOK_SALTO{
                        printf("comando chmod\t");
                    }
                    |TOK_TOUCH paramslist13 TOK_SALTO{
                        printf("comando touch\t");
                    }
                    |TOK_CAT paramslist14 TOK_SALTO{
                        printf("comando cat\t");
                    }
                    |TOK_RM paramslist15 TOK_SALTO{
                        printf("comando rm\t");
                    }
                    |TOK_EDIT paramslist16 TOK_SALTO{
                        printf("comando edit\t");
                    }
                    |TOK_REN paramslist17 TOK_SALTO{
                        printf("comando ren\t");
                    }
                    |TOK_MKDIR paramslist18 TOK_SALTO{
                        printf("comando mkdir\t");
                    }
                    |TOK_CP paramslist19 TOK_SALTO{
                        printf("comando cp\t");
                    }
                    |TOK_MV paramslist20 TOK_SALTO{
                        printf("comando mv\t");
                    }
                    |TOK_FIND paramslist21 TOK_SALTO{
                        printf("comando find\t");
                    }
                    |TOK_CHOWN paramslist22 TOK_SALTO{
                        printf("comando chown\t");
                    }
                    |TOK_CHGRP paramslist23 TOK_SALTO{
                        printf("comando chgrp\t");
                    }
                    |TOK_RECOVERY paramslist24 TOK_SALTO{
                        printf("comando recovery\t");
                    }
                    |TOK_LOSS paramslist25 TOK_SALTO{
                        printf("comando loss\t");
                    }
                    |TOK_EXEC paramslist26 TOK_SALTO{
                        printf("comando exec\t"); 
                    }
;

paramslist1:        paramslist1 params1{
                    }
                    |params1{                        
                    }
;

paramslist2:        paramslist2 params2{
                    }
                    |params2{                        
                    }
;

paramslist3:        paramslist3 params3{
                    }
                    |params3{                        
                    }
;

paramslist4:        paramslist4 params4{
                    }
                    |params4{                        
                    }
;

paramslist5:        paramslist5 params5{
                    }
                    |params5{                        
                    }
;

paramslist6:        paramslist6 params6{
                    }
                    |params6{                        
                    }
;

paramslist7:        paramslist7 params7{
                    }
                    |params7{                        
                    }
;

paramslist8:        paramslist8 params8{
                    }
                    |params8{                        
                    }
;

paramslist9:        paramslist9 params9{
                    }
                    |params9{                        
                    }
;

paramslist10:       paramslist10 params10{
                    }
                    |params10{                        
                    }
;

paramslist11:       paramslist11 params11{
                    }
                    |params11{                        
                    }
;

paramslist12:       paramslist12 params12{
                    }
                    |params12{                        
                    }
;

paramslist13:       paramslist13 params13{
                    }
                    |params13{                        
                    }
;

paramslist14:       paramslist14 params14{
                    }
                    |params14{                        
                    }
;

paramslist15:       paramslist15 params15{
                    }
                    |params15{                        
                    }
;

paramslist16:       paramslist16 params16{
                    }
                    |params16{                        
                    }
;

paramslist17:       paramslist17 params17{
                    }
                    |params17{                        
                    }
;

paramslist18:       paramslist18 params18{
                    }
                    |params18{                        
                    }
;

paramslist19:       paramslist19 params19{
                    }
                    |params19{                        
                    }
;

paramslist20:       paramslist20 params20{
                    }
                    |params20{                        
                    }
;

paramslist21:       paramslist21 params21{
                    }
                    |params21{                        
                    }
;

paramslist22:       paramslist22 params22{
                    }
                    |params22{                        
                    }
;

paramslist23:       paramslist23 params23{
                    }
                    |params23{                        
                    }
;

paramslist24:       paramslist24 params24{
                    }
                    |params24{                        
                    }
;

paramslist25:       paramslist25 params25{
                    }
                    |params25{                        
                    }
;

paramslist26:       paramslist26 params26{
                    }
                    |params26{                        
                    }
;

params1:            TOK_SIZE TOK_IGUAL TOK_NUMERO{
                        printf("parametro size\t");
                    }
                    |TOK_PATH TOK_IGUAL TOK_RUTA{
                        printf("parametro path\t");
                    }
                    |TOK_F TOK_IGUAL TOK_AJUSTE{
                        printf("parametro f\t");
                    }
                    |TOK_U TOK_IGUAL TOK_UNIDADES{
                        printf("parametro u\t");
                    }
;

params2:            TOK_PATH TOK_IGUAL TOK_RUTA{
                        printf("parametro path\t");
                    }
;

params3:            TOK_SIZE TOK_IGUAL TOK_NUMERO{
                        printf("parametro size\t");
                    }
                    |TOK_PATH TOK_IGUAL TOK_RUTA{
                        printf("parametro path\t");
                    }
                    |TOK_NAME TOK_IGUAL TOK_NOMBRE{
                        printf("parametro name\t");
                    }
                    |TOK_F TOK_IGUAL TOK_AJUSTE{
                        printf("parametro f\t");
                    }
                    |TOK_U TOK_IGUAL TOK_UNIDADES{
                        printf("parametro u\t");
                    }
                    |TOK_DELETE TOK_IGUAL TOK_CAPACIDAD{
                        printf("parametro delete\t");
                    }
                    |TOK_TYPE TOK_IGUAL TOK_TIPO{
                        printf("parametro type\t");
                    }
                    |TOK_ADD TOK_IGUAL TOK_NUMERO{
                        printf("parametro add\t");
                    }
;

params4:            TOK_PATH TOK_IGUAL TOK_RUTA{
                        printf("parametro path\t");
                    }
                    |TOK_NAME TOK_IGUAL TOK_NOMBRE{
                        printf("parametro name\t");
                    }
;

params5:            TOK_ID TOK_IGUAL TOK_IDENTIFICADOR{
                        printf("parametro id\t");
                    }
;

params6:            TOK_ID TOK_IGUAL TOK_IDENTIFICADOR{
                        printf("parametro id\t");
                    }
                    |TOK_TYPE TOK_IGUAL TOK_CAPACIDAD{
                        printf("parametro type\t");
                    }
                    |TOK_FS TOK_IGUAL TOK_SISTEMA{
                        printf("parametro fs\t");
                    }
;

params7:            TOK_USR TOK_IGUAL TOK_NOMBRE{
                        printf("parametro usr\t");
                    }
                    |TOK_PWD TOK_IGUAL TOK_NOMBRE{
                        printf("parametro pwd\t");
                    }
                    |TOK_ID TOK_IGUAL TOK_IDENTIFICADOR{
                        printf("parametro id\t");
                    }
;

params8:            TOK_NAME TOK_IGUAL TOK_NOMBRE{
                        printf("parametro name\t");
                    }
;

params9:            TOK_NAME TOK_IGUAL TOK_NOMBRE{
                        printf("parametro name\t");
                    }
;

params10:           TOK_USR TOK_IGUAL TOK_NOMBRE{
                        printf("parametro usr\t");
                    }
                    |TOK_PWD TOK_IGUAL TOK_NOMBRE{
                        printf("parametro pwd\t");
                    }
                    |TOK_GRP TOK_IGUAL TOK_NOMBRE{
                        printf("parametro grp\t");
                    }
;

params11:            TOK_USR TOK_IGUAL TOK_NOMBRE{
                        printf("parametro usr\t");
                    }
;

params12:           TOK_PATH TOK_IGUAL TOK_RUTA{
                        printf("parametro path\t");
                    }
                    |TOK_UGO TOK_IGUAL TOK_NUMERO{
                        printf("parametro ugo\t");
                    }
                    |TOK_R{
                        printf("parametro r\t");
                    }
;

params13:           TOK_PATH TOK_IGUAL TOK_RUTA{
                        printf("parametro path\t");
                    }
                    |TOK_R{
                        printf("parametro r\t");
                    }
                    |TOK_SIZE TOK_IGUAL TOK_NUMERO{
                        printf("parametro size\t");
                    }
                    |TOK_CONT TOK_IGUAL TOK_RUTA{
                        printf("parametro cont\t");
                    }
                    |TOK_STDIN{
                        printf("parametro stdin\t");
                    }
;

params14:           TOK_FILEN TOK_IGUAL TOK_RUTA{
                        printf("parametro filen\t");
                    }
;

params15:           TOK_PATH TOK_IGUAL TOK_RUTA{
                        printf("parametro path\t");
                    }
;

params16:           TOK_PATH TOK_IGUAL TOK_RUTA{
                        printf("parametro path\t");
                    }
                    |TOK_CONT TOK_IGUAL TOK_RUTA{
                        printf("parametro cont\t");
                    }
                    |TOK_STDIN{
                        printf("parametro stdin\t");
                    }
;

params17:           TOK_PATH TOK_IGUAL TOK_RUTA{
                        printf("parametro path\t");
                    }
                    |TOK_NAME TOK_IGUAL TOK_NOMBRE{
                        printf("parametro name\t");
                    }
;

params18:           TOK_PATH TOK_IGUAL TOK_RUTA{
                        printf("parametro path\t");
                    }
                    |TOK_P{
                        printf("parametro p\t");
                    }
;

params19:           TOK_PATH TOK_IGUAL TOK_RUTA{
                        printf("parametro path\t");
                    }
                    |TOK_DEST TOK_IGUAL TOK_RUTA{
                        printf("parametro dest\t");
                    }
;

params20:           TOK_PATH TOK_IGUAL TOK_RUTA{
                        printf("parametro path\t");
                    }
                    |TOK_DEST TOK_IGUAL TOK_RUTA{
                        printf("parametro dest\t");
                    }
;

params21:           TOK_PATH TOK_IGUAL TOK_RUTA{
                        printf("parametro path\t");
                    }
                    |TOK_NAME TOK_IGUAL TOK_NOMBRE{
                        printf("parametro name\t");
                    }
;

params22:           TOK_PATH TOK_IGUAL TOK_RUTA{
                        printf("parametro path\t");
                    }
                    |TOK_USR TOK_IGUAL TOK_NOMBRE{
                        printf("parametro usr\t");
                    }
                    |TOK_R{
                        printf("parametro r\t");
                    }
;

params23:           TOK_USR TOK_IGUAL TOK_NOMBRE{
                        printf("parametro usr\t");
                    }
                    |TOK_GRP TOK_IGUAL TOK_NOMBRE{
                        printf("parametro grp\t");
                    }
;

params24:           TOK_ID TOK_IGUAL TOK_IDENTIFICADOR{
                        printf("parametro id\t");
                    }
;

params25:           TOK_ID TOK_IGUAL TOK_IDENTIFICADOR{
                        printf("parametro id\t");
                    }
;

params26:           TOK_PATH TOK_IGUAL TOK_RUTA{
                        printf("parametro path\t");
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

