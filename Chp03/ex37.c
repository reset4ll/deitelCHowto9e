/* 3.6 Write single C statements to perform each of the following tasks:
 *
 * a) Input integer variable x with scanf. Use the conversion specification %d.
 * b) Input integer variable y with scanf. Use the conversion specification %d.
 * c) Set integer variable i to 1.
 * d) Set integer variable power to 1.
 * e) Multiply integer variable power by x and assign the result to power.
 * f) Increment variable i by 1. 
 * g) Test i to see if it’s less than or equal to y in the condition of a while
 *    statement.
 * h) Output integer variable power with printf.
 *
 * int x, y;
 * scanf("%d", &x);
 * scanf("%d", &y);
 * int i = 1;
 * int power = 1;
 * power *= x;
 * i += 1;
 * while(i <= y)
 * printf("El valor del número elevado a dicha potencia es: %d\n", potencia);
 * 
 */

 /*  
 * 3.7 Write a C program that uses the statements in the preceding exercise to 
 * calculate x raised to the y power. The program should have a while iteration
 * control statement.
 */
#include <stdio.h>

int main(void) 
{
    int numero, exponente;
    int indice = 1;  // Centinela
    long potencia = 1;

    // Introducir datos
    puts("Introduce un número entero: ");
    scanf("%d", &numero);
    puts("Introduce el exponente: ");
    scanf("%d", &exponente);

    // Bucle
    while(indice <= exponente) {
        potencia *= numero;
        indice += 1;  // Centinela++
    }
        // Importante que esté fuera del bucle, de lo contrario, imprimiría
        // el mensaje i-veces la potencia. 
        printf("La potencia de %de+%d es: %ld\n", \
               numero, exponente, potencia); 

    return 0;
}














