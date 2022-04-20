#!/bin/bash 
: << 'Header'
Autor:           Christian Ball Ajú 
Carnet:          201904349
Tipo de archivo: Script que genera un archivo dos archivos (uno oculto y otro no)
Ejecución:       ./creadorProgramas.sh
Resumen:         Este archivo bash genera dos archivos uno que esta oculto y no uno.
Header

touch .archivoOculto
touch archivoNoOculto
cat <<EOF >>archivoNoOculto
Bievenido a su primer parcial debe de completar las siguientes tareas*****
------------------
1. Realizar las preguntas del form
2. Debe de crear un usuario con nombre nombreapellido, contraseña la de su examen
debe de tener permisos de super usuario.
LO SIGUIENTE DEBE DE ESTAR LOGIADO DESDE EL USUARIO QUE CREO
1. Crear una carpeta de nombre examen_nombre_apellido
2. Dentro de la carpeta creada, crear un archivo que se llame documentacion.Rmd,
aqui debe de almacenar todos los comandos utilizados en el examen
3. Dentro de la carpeta creada, realizar un script de bash que cree un archivo oculto vacio,
nombre a su eleccion, un archivo no oculto el cual contenga estas instrucciones
que ve en pantalla.
4. Buscar la carpeta donde se encuentre el git del examen puede buscar el archio leeme
5. dentro de la carpeta del git, crear un branch de nobre su numero de carnet
6. dentro del archivo leeme escriba su nombre y el nombre de su branch
7. cambie a su branch y copie la carpeta de su examen dentro de la carpeta del git.
--------------
EXITOS, NO OLVIDE DAR COMMIT A SUS CAMBIOS
EOF