unset label
clear
set terminal pdf
set output "graficapdf.pdf"
set title "Pruebra grafico"
set xlabel "x"
set ylabel "datos"
set grid
set style data boxplot
plot "datos" using 2:3
