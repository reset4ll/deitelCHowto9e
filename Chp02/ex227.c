/* 2.27 (Table of Squares and Cubes) Using only the techniques you learned in
 * this chapter, write a program that calculates the squares and cubes of the
 * numbers from 0 to 10 and uses tabs to display the table of values.
 */

#include <stdio.h>

int main(void)
{
    int numero = 0; 
    int cuadrado, cubo;
    
    cuadrado = numero * numero;
    cubo = numero * numero * numero;

    // Cabecera
    puts("numero   cuadrado   cubo");

    // Números 1...10
    printf("%d        %d          %d\n", numero, cuadrado, cubo);
    numero = 1;
    cuadrado = numero * numero;
    cubo = numero * numero * numero;

    printf("%d        %d          %d\n", numero, cuadrado, cubo);
    numero = 2;
    cuadrado = numero * numero;
    cubo = numero * numero * numero;

    printf("%d        %d          %d\n", numero, cuadrado, cubo);
    numero = 3;
    cuadrado = numero * numero;
    cubo = numero * numero * numero;

     
    printf("%d        %d          %d\n", numero, cuadrado, cubo);
    numero = 4;
    cuadrado = numero * numero;
    cubo = numero * numero * numero;

    printf("%d        %d         %d\n", numero, cuadrado, cubo);
    numero = 5;
    cuadrado = numero * numero;
    cubo = numero * numero * numero;
   
    printf("%d        %d         %d\n", numero, cuadrado, cubo);
    numero = 6;
    cuadrado = numero * numero;
    cubo = numero * numero * numero;

    printf("%d        %d         %d\n", numero, cuadrado, cubo);
    numero = 7;
    cuadrado = numero * numero;
    cubo = numero * numero * numero;

    printf("%d        %d         %d\n", numero, cuadrado, cubo);
    numero = 8;
    cuadrado = numero * numero;
    cubo = numero * numero * numero;

    printf("%d        %d         %d\n", numero, cuadrado, cubo);
    numero = 9;
    cuadrado = numero * numero;
    cubo = numero * numero * numero;

    printf("%d        %d         %d\n", numero, cuadrado, cubo);
    numero = 10;
    cuadrado = numero * numero;
    cubo = numero * numero * numero;

    printf("%d       %d        %d\n", numero, cuadrado, cubo);

    return 0;
}
 
// Salida:
// ------
// numero   cuadrado   cubo
// 0        0          0    
// 1        1          1
// 2        4          8
// 3        9          27
// 4        16         64
// 5        25         125
// 6        36         216
// 7        49         343
// 8        64         512
// 9        81         729
// 10       100        1000 

