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














