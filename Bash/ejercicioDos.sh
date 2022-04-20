#!/bin/bash 
: << 'Header'
Autor:           Christian Ball Ajú 
Carnet:          201904349
Tipo de archivo: Script que genera un archivo .c
Ejecución:       ./ejercicioDos.sh
Resumen:         Este archivo bash genera un archivo c el cual ya tiene un encabezado descriptivo del nuevo archivo creado.
Header

echo "Introduzca el nombre de su archivo:"
read nombreArchivo
if [ -n "$nombreArchivo" ]; then 
    echo "/*" > $nombreArchivo.c   
    gcc --version > versionCompi
    lectoversion=$(head -n 1 versionCompi)   
    echo "Ingrese Resumen:"
    read resumen    
    echo "Ingrese Entrada:"
    read entrada  
    echo "Ingrese Salida:"
    read salida             
    cat <<EOF >>$nombreArchivo.c
# "Autor:        $USER" 
#"Compilador:    $lectoversion" 
#"Compilado:     gcc $nombreArchivo."out" -o $nombreArchivo"
#"Fecha:         $(date +%D)"
#"Librerias:     stdio"
#"Resumen:       $resumen"
#"Entrada:       $entrada"
#"Salida:       $salida"
*/ 
//Libreria 
#include <stdio.h>
//numerar los pasos del pseudocodigo
EOF
    rm versionCompi
    chmod +x $nombreArchivo.c   
else
    echo "No introdujo nombre del archivo."
fi