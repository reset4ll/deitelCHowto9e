/* 2.16 (Arithmetic) Write a program that reads two integers from the user 
 * then displays their sum, product, difference, quotient and remainder.
 */

#include <stdio.h>

int main(void)
{
    int number1, number2;

    puts("Introduce dos enteros: ");
    scanf("%d%d", &number1, &number2);

    // Imprime los resultados
    printf("La suma es: %d\n", (number1 + number2));
    printf("El producto es: %d\n", (number1 * number2));
    printf("La resta es: %d\n", (number1 - number2));
    printf("El cociente es: %d\n", (number1 / number2));
    printf("El resto es: %d\n", (number1 % number2));

    return 0;
}
