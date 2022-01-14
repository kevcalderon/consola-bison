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
salto           \n+


%%

{mkdisk}                {yylval.mkdisk = strdup(yytext); return TOK_MKDISK;}
{rmdisk}                {yylval.rmdisk = strdup(yytext); return TOK_MKDISK;}
{fdisk}                 {yylval.fdisk = strdup(yytext); return TOK_FDISK;}
{mount}                 {yylval.mount = strdup(yytext); return TOK_MOUNT;}
{unmount}               {yylval.unmount = strdup(yytext); return TOK_UNMOUNT;}
{mkfs}                  {yylval.mkfs = strdup(yytext); return TOK_MKFS;}
{login}                 {yylval.login = strdup(yytext); return TOK_LOGIN;}
{logout}                {yylval.logout = strdup(yytext); return TOK_LOGOUT;}
{stdin}                 {yylval.stdin = strdup(yytext); return TOK_STDIN;}
{mkgrp}                 {yylval.mkgrp = strdup(yytext); return TOK_MKGRP;}
{rmgrp}                 {yylval.rmgrp = strdup(yytext); return TOK_RMGRP;}
{mkusr}                 {yylval.mkusr = strdup(yytext); return TOK_MKUSR;}
{mkdir}                 {yylval.mkdir = strdup(yytext); return TOK_MKDIR;}
{rmusr}                 {yylval.rmusr = strdup(yytext); return TOK_RMUSR;}
{chmod}                 {yylval.chmod = strdup(yytext); return TOK_CHMOD;}
{cat}                   {yylval.cat = strdup(yytext); return TOK_CAT;}
{rm}                    {yylval.rm = strdup(yytext); return TOK_RM;}
{edit}                  {yylval.edit = strdup(yytext); return TOK_EDIT;}
{ren}                   {yylval.ren = strdup(yytext); return TOK_REN;}
{cp}                    {yylval.cp = strdup(yytext); return TOK_CP;}
{mv}                    {yylval.mv = strdup(yytext); return TOK_MV;}
{find}                  {yylval.find = strdup(yytext); return TOK_FIND;}
{chown}                 {yylval.chown = strdup(yytext); return TOK_CHOWN;}
{chgrp}                 {yylval.chgrp = strdup(yytext); return TOK_CHGRP;}
{recovery}              {yylval.recovery = strdup(yytext); return TOK_RECOVERY;}
{loss}                  {yylval.loss = strdup(yytext); return TOK_LOSS;}
{exec}                  {yylval.exec = strdup(yytext); return TOK_EXEC;}
{size}                  {yylval.size = strdup(yytext); return TOK_SIZE;}
{path}                  {yylval.path = strdup(yytext); return TOK_PATH;}
{name}                  {yylval.name = strdup(yytext); return TOK_NAME;}
{id}                    {yylval.id = strdup(yytext); return TOK_ID;}
{usr}                   {yylval.usr = strdup(yytext); return TOK_USR;}
{pwd}                   {yylval.pwd = strdup(yytext); return TOK_PWD;}
{grp}                   {yylval.grp = strdup(yytext); return TOK_GRP;}
{ugo}                   {yylval.ugo = strdup(yytext); return TOK_UGO;}
{filen}                 {yylval.filen = strdup(yytext); return TOK_FILEN;}
{cont}                  {yylval.cont = strdup(yytext); return TOK_CONT;}
{dest}                  {yylval.dest = strdup(yytext); return TOK_DEST;}
{f}                     {yylval.f = strdup(yytext); return TOK_F;}
{u}                     {yylval.u = strdup(yytext); return TOK_U;}
{type}                  {yylval.type = strdup(yytext); return TOK_TYPE;}
{delete}                {yylval.delete = strdup(yytext); return TOK_DELETE;}
{add}                   {yylval.add = strdup(yytext); return TOK_ADD;}
{fs}                    {yylval.fs = strdup(yytext); return TOK_FS;}
{r}                     {yylval.r = strdup(yytext); return TOK_R;}
{p}                     {yylval.p = strdup(yytext); return TOK_P;}
{interrogacion}         {return TOK_INTERROGACION;}
{cerradura}             {return TOK_CERRADURA;}
{permisos}              {yylval.permisos = strdup(yytext); return TOK_PERMISOS;}
{numero}                {yylval.numero = strdup(yytext); return TOK_NUMERO;}
{ajuste}                {yylval.ajuste = strdup(yytext); return TOK_AJUSTE;}
{unidades}              {yylval.unidades = strdup(yytext); return TOK_UNIDADES;}
{ruta}                  {yylval.ruta = strdup(yytext); return TOK_RUTA;}
{tipo}                  {yylval.tipo = strdup(yytext); return TOK_TIPO;}
{capacidad}             {yylval.capacidad = strdup(yytext); return TOK_CAPACIDAD;}
{sistema}               {yylval.sistema = strdup(yytext); return TOK_SISTEMA;}
{identificador}         {yylval.identificador = strdup(yytext); return TOK_IDENTIFICADOR;}
{igual}                 { return TOK_IGUAL;}
{salto}                 { return TOK_SALTO;}

{blanco}                ;
.               {printf("ERROR LEXICO\n");
                 return TOK_ERROR;}

%%