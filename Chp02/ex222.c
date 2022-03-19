/* 2.22 (Odd or Even) Write a program that reads an integer and determines and
 * displays whether it’s odd or even. Use the remainder operator.
 * An even number is a multiple of two. Any multiple of two leaves a remainder
 * of zero when divided by 2. 
 */

#include <stdio.h>

int main(void)
{
    int number, resto;;

    puts("Introduce un número entero");
    scanf("%d", &number);
    
    resto = number % 2; // Cálculo del resto

    // Número par o impar?
    if (resto == 0) {
        puts("El número es par");
    }
    if (resto != 0) {
        puts("El número es impar");
    }

    return 0;
}
