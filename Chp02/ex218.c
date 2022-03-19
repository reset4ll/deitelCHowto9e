/* 2.18 (Comparing Integers) Write a program that reads two integers from
 * the user then displays the larger number followed by the words “is larger.” 
 * If the numbers are equal, display the message “These numbers are equal.”
 * Use only the single selection form of the if statement you learned in this
 * chapter.
 */

#include <stdio.h>

int main(void)
{
    int number1, number2;

    // Introducir los dos números
    puts("Introduce los dos números:");
    scanf("%d%d", &number1, &number2);

    // Selección simple
    if (number1 > number2) {
        puts("El primer número es mayor que el segundo");
    }
    if (number1 == number2) {
        puts("Los dos números son iguales");
    }
    if (number1 < number2) {
        puts("El segundo número es mayor que el primero");
    }

    return 0;

}
