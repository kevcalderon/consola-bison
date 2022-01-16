%{
#include <stdlib.h>
#include <stdio.h>
#include "y.tab.h"
void yyerror(char *);
%}


%option noyywrap
%option caseless
%option noinput
%option nounput


/*TOKENS PARA PROYECTO*/

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
identificador   [0-9]{3}[Aa-zZ]
numero          [0-9]+
ajuste          "BF"|"FF"|"WF"
unidades        "B"|"K"|"M"
cadena          [\"][^\"\n]*[\"]
ruta            {cadena}|([/][^\n\" ]+)+
tipo            "P"|"E"|"L"
capacidad       "FAST"|"FULL"
sistema         "2FS"|"3FS"
nombre          [a-zA-Z0-9._-]{1,10}
igual           "="
salto           \n+


%%

{numero}                {yylval.entrada = strdup(yytext); return TOK_NUMERO;}
{identificador}         {yylval.entrada = strdup(yytext); return TOK_IDENTIFICADOR;}
{mkdisk}                {yylval.entrada = strdup(yytext); return TOK_MKDISK;}
{rmdisk}                {yylval.entrada = strdup(yytext); return TOK_MKDISK;}
{fdisk}                 {yylval.entrada = strdup(yytext); return TOK_FDISK;}
{mount}                 {yylval.entrada = strdup(yytext); return TOK_MOUNT;}
{unmount}               {yylval.entrada = strdup(yytext); return TOK_UNMOUNT;}
{mkfs}                  {yylval.entrada = strdup(yytext); return TOK_MKFS;}
{login}                 {yylval.entrada = strdup(yytext); return TOK_LOGIN;}
{logout}                {yylval.entrada = strdup(yytext); return TOK_LOGOUT;}
{stdin}                 {yylval.entrada = strdup(yytext); return TOK_STDIN;}
{mkgrp}                 {yylval.entrada = strdup(yytext); return TOK_MKGRP;}
{rmgrp}                 {yylval.entrada = strdup(yytext); return TOK_RMGRP;}
{mkusr}                 {yylval.entrada = strdup(yytext); return TOK_MKUSR;}
{mkdir}                 {yylval.entrada = strdup(yytext); return TOK_MKDIR;}
{rmusr}                 {yylval.entrada = strdup(yytext); return TOK_RMUSR;}
{chmod}                 {yylval.entrada = strdup(yytext); return TOK_CHMOD;}
{cat}                   {yylval.entrada = strdup(yytext); return TOK_CAT;}
{rm}                    {yylval.entrada = strdup(yytext); return TOK_RM;}
{edit}                  {yylval.entrada = strdup(yytext); return TOK_EDIT;}
{ren}                   {yylval.entrada = strdup(yytext); return TOK_REN;}
{cp}                    {yylval.entrada = strdup(yytext); return TOK_CP;}
{mv}                    {yylval.entrada = strdup(yytext); return TOK_MV;}
{find}                  {yylval.entrada = strdup(yytext); return TOK_FIND;}
{chown}                 {yylval.entrada = strdup(yytext); return TOK_CHOWN;}
{chgrp}                 {yylval.entrada = strdup(yytext); return TOK_CHGRP;}
{recovery}              {yylval.entrada = strdup(yytext); return TOK_RECOVERY;}
{loss}                  {yylval.entrada = strdup(yytext); return TOK_LOSS;}
{exec}                  {yylval.entrada = strdup(yytext); return TOK_EXEC;}
{size}                  {yylval.entrada = strdup(yytext); return TOK_SIZE;}
{path}                  {yylval.entrada = strdup(yytext); return TOK_PATH;}
{name}                  {yylval.entrada = strdup(yytext); return TOK_NAME;}
{id}                    {yylval.entrada = strdup(yytext); return TOK_ID;}
{usr}                   {yylval.entrada = strdup(yytext); return TOK_USR;}
{pwd}                   {yylval.entrada = strdup(yytext); return TOK_PWD;}
{grp}                   {yylval.entrada = strdup(yytext); return TOK_GRP;}
{ugo}                   {yylval.entrada = strdup(yytext); return TOK_UGO;}
{filen}                 {yylval.entrada = strdup(yytext); return TOK_FILEN;}
{cont}                  {yylval.entrada = strdup(yytext); return TOK_CONT;}
{dest}                  {yylval.entrada = strdup(yytext); return TOK_DEST;}
{f}                     {yylval.entrada = strdup(yytext); return TOK_F;}
{u}                     {yylval.entrada = strdup(yytext); return TOK_U;}
{type}                  {yylval.entrada = strdup(yytext); return TOK_TYPE;}
{delete}                {yylval.entrada = strdup(yytext); return TOK_DELETE;}
{add}                   {yylval.entrada = strdup(yytext); return TOK_ADD;}
{fs}                    {yylval.entrada = strdup(yytext); return TOK_FS;}
{r}                     {yylval.entrada = strdup(yytext); return TOK_R;}
{p}                     {yylval.entrada = strdup(yytext); return TOK_P;}
{ajuste}                {yylval.entrada = strdup(yytext); return TOK_AJUSTE;}
{unidades}              {yylval.entrada = strdup(yytext); return TOK_UNIDADES;}
{ruta}                  {yylval.entrada = strdup(yytext); return TOK_RUTA;}
{tipo}                  {yylval.entrada = strdup(yytext); return TOK_TIPO;}
{capacidad}             {yylval.entrada = strdup(yytext); return TOK_CAPACIDAD;}
{sistema}               {yylval.entrada = strdup(yytext); return TOK_SISTEMA;}
{igual}                 {yylval.entrada = strdup(yytext); return TOK_IGUAL;}
{salto}                 { return TOK_SALTO;}
{nombre}                {yylval.entrada = strdup(yytext); return TOK_NOMBRE;}
[[:blank:]]             ;
.                       yyerror("ERROR LEXICO");

%%