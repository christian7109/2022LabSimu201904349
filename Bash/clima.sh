#!/bin/bash 
#obtener="$(curl wttr.in/Guatemala)" #obtener datos de la url 
#archivo="$(curl wttr.in/Guatemala)" 
curl -s -o ~/ejercicio_docker/guardarclima.sh wttr.in/Guatemala
head -n 7 ./guardarclima.sh
eliminar="$(rm guardarclima.sh)"

echo Introduce el nombre del archivo
read nombre
echo Tu nombre es $nombre