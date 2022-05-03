unset label
clear
set terminal epslatex
set output "Ej4.tex"
set title "Pruebra grafico"
set xlabel "x"
set ylabel "datos"
set grid
set style data boxplot
plot "datos" using 2:3
