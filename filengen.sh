#!/bin/bash 
: << 'Header'
Autor:           Christian Ball Ajú 
Carnet:          201904349
Tipo de archivo: Script que genera un archivo .c
Ejecución:       ./ejercicioDos.sh
Resumen:         Este archivo bash genera un archivo c el cual ya tiene un encabezado descriptivo del nuevo archivo creado.
Header

#bienvenida 
echo "*** Generador de Archivos de C***"
#obtener y validar  el nombre del archivo
read -p " Ingrese nombre del archivo"  nombre 
if [ -z "$nombre" ]; then 
    echo "No ingreso un nombre válido"
    exit 2  #ponemos el dos porque no es error sino yo quiero que haga eso 
fi


fnombre=$nombre.c 
if [ -e "$nombre" ]; then 
    echo "El archivo existe"
    exit 2  #ponemos el dos porque no es error sino yo quiero que haga eso 
fi
salida=$nombre".out"
fecha=$(date)
version=$(gcc --version | head -n 1)
#crear contenido del  header 
echo "/*" > $fnombre
echo "Autor:        Benja Ajú">>$fnombre
echo "fecha:        "$fecha>>$fnombre
echo "compilador:   "$version>>$fnombre
echo "compilar:     "gcc -o $salida $fnombre>>$fnombre
echo "Librerias:    " stdio >> $fnombre
echo "resumen:      ">>$fnombre
echo "*/" >>$fnombre
echo "">>$fnombre
echo "//librerias">> $fnombre
echo "#include <stdio.h>" >>$fnombre
echo "Archivo realizado"
