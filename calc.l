%{
#include <stdlib.h>
#include <stdio.h>
#include "y.tab.h"
#define TOK_ERROR -1
%}


%option noyywrap
%option caseless


/*TOKENS PARA PROYECTO*/
blanco          [ \t\r\f]+
mkdisk          "MKDISK"
rmdisk          "RMDISK"
fdisk           "FDISK"
mount           "MOUNT"
unmount         "UNMOUNT"
mkfs            "MKFS"
login           "LOGIN"
logout          "LOGOUT"
mkgrp           "MKGRP"
rmgrp           "RMGRP"
mkusr           "MKUSR"
rmusr           "RMUSR"
chmod           "CHMOD"
touch           "TOUCH"
cat             "CAT"
rm              "RM"
edit            "EDIT"
ren             "REN"
mkdir           "MKDIR"
cp              "CP"
mv              "MV"
find            "FIND"
chown           "CHOWN"
chgrp           "CHGRP"
recovery        "RECOVERY"
loss            "LOSS"
exec            "EXEC"
size            "-size"
path            "-path"
name            "-name"
id              "-id"
usr             "-usr"
pwd             "-pwd"
grp             "-grp"
ugo             "-ugo"
filen            "-file"[0-9]+
cont            "-cont"
stdin           "-stdin"
dest            "-dest"
f               "-f"
u               "-u"
type            "-type"
delete          "-delete"
add             "-add"
fs              "-fs"
r               "-r"
p               "-p"
interrogacion   "?"
cerradura       "*"
numero          [0-9]+
ajuste          "BF"|"FF"|"WF"
unidades        "B"|"K"|"M"
ruta            ([\"][^\"\n]*[\"])|([/][^\n\" ]+)+
tipo            "P"|"E"|"L"
nombre          ([\"][^\"\n]{1,10}[\"])|([^\n\" ]){1,10}
capacidad       "FAST"|"FULL"
sistema         "2FS"|"3FS"
permisos        ([0-7][0-7][0-7])
identificador   [0-9]{3}[Aa-zZ]
igual           "="
salto           "\n"


%%

{mkdisk}        {return TOK_MKDISK;}
{rmdisk}        {return TOK_MKDISK;}
{fdisk}        {return TOK_FDISK;}
{mount}        {return TOK_MOUNT;}
{unmount}        {return TOK_UNMOUNT;}
{mkfs}        {return TOK_MKFS;}
{login}        {return TOK_LOGIN;}
{logout}        {return TOK_LOGOUT;}
{stdin}        {return TOK_STDIN;}


{mkgrp}        {return TOK_MKGRP;}
{rmgrp}        {return TOK_RMGRP;}
{mkusr}        {return TOK_MKUSR;}
{mkdir}        {return TOK_MKDIR;}
{rmusr}        {return TOK_RMUSR;}
{chmod}        {return TOK_CHMOD;}
{touch}        {return TOK_TOUCH;}
{cat}        {return TOK_CAT;}
{rm}        {return TOK_RM;}
{edit}        {return TOK_EDIT;}
{ren}        {return TOK_REN;}
{cp}        {return TOK_CP;}
{mv}        {return TOK_MV;}
{find}        {return TOK_FIND;}
{chown}        {return TOK_CHOWN;}
{chgrp}        {return TOK_CHGRP;}
{recovery}        {return TOK_RECOVERY;}
{loss}        {return TOK_LOSS;}
{exec}        {return TOK_EXEC;}
{size}        {return TOK_SIZE;}
{path}        {return TOK_PATH;}
{name}        {return TOK_NAME;}
{id}        {return TOK_ID;}
{usr}        {return TOK_USR;}
{pwd}        {return TOK_PWD;}
{grp}        {return TOK_GRP;}
{ugo}        {return TOK_UGO;}
{filen}        {return TOK_FILEN;}
{cont}        {return TOK_CONT;}
{dest}        {return TOK_DEST;}
{f}        {return TOK_F;}
{u}        {return TOK_U;}
{type}        {return TOK_TYPE;}
{delete}        {return TOK_DELETE;}
{add}        {return TOK_ADD;}
{fs}        {return TOK_FS;}
{r}        {return TOK_R;}
{p}        {return TOK_P;}
{interrogacion}        {return TOK_INTERROGACION;}
{cerradura}        {return TOK_CERRADURA;}
{permisos}        {yylval.permisos = strdup(yytext); return TOK_PERMISOS;}
{numero}        {yylval.numero = atoi(yytext);
                 return TOK_NUMERO;}
{ajuste}        {yylval.ajuste = strdup(yytext); return TOK_AJUSTE;}
{unidades}        {yylval.unidades = strdup(yytext); return TOK_UNIDADES;}
{ruta}        {yylval.ruta = strdup(yytext); return TOK_RUTA;}
{tipo}        {yylval.tipo = strdup(yytext); return TOK_TIPO;}
{capacidad}        {yylval.capacidad = strdup(yytext); return TOK_CAPACIDAD;}
{sistema}        {yylval.sistema = strdup(yytext); return TOK_SISTEMA;}
{identificador}        {yylval.identificador = strdup(yytext); return TOK_IDENTIFICADOR;}
{igual}        { return TOK_IGUAL;}
{salto}        { return TOK_SALTO;}

{blanco}        ;
                 


.               {printf("ERROR LEXICO\n");
                 return TOK_ERROR;}

%%
