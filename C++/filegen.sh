#!/bin/bash

: << 'Header'
Autor:              Benja Aju 
Fecha:              08/03/2022
Tipo de archivo:    Script de Bash
Ejecucion:          ./filegen.sh
Resumen:            genera header para archivos de programacion en lenguaje C.
Header
#bienvenida
echo "**** Generador de Archivos de C ****"
#obtener y validar el nombre del archivo
read -p "Ingrese nombre del archivo: " nombre
if [ -z $nombre ]; then
    echo "No ingreso un nombre valido"
    exit 2
fi
fnombre=$nombre".cpp"
if [ -e $fnombre ]; then
    echo "El archivo ya existe"
    exit 2
fi
salida=$nombre".out"
fecha=$(date)
version=$(g++ --version | head -n 1)
#crear el contenido del header
echo "/*" > $fnombre
echo "Autor:         Benja Aju" >> $fnombre
echo "Fecha:        " $fecha >> $fnombre
echo "compilador:   " $version >> $fnombre
echo "Compilar:     " g++ -o $salida $fnombre >> $fnombre
echo "Librerias:    " iostream >> $fnombre
echo "Resumen:      " >> $fnombre
echo "*/" >> $fnombre
echo "" >> $fnombre
echo "//librerias" >> $fnombre
echo "#include <iostream>" >> $fnombre
echo "Archivo realizado"
