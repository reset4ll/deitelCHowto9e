/* 2.26 (Separating Digits in an Integer) Write a program that inputs one 
 * five-digit number, separates the number into its individual digits and
 * displays the digits separated from one another by three spaces each.
 * [Hint: Use combinations of integer division and the remainder operation.]
 * For example, if the user types in 42139, the program should display
 * 4 2 1 3 9 
 */

#include <stdio.h>

int main(void)
{
    int n1, n2, n3, n4, n5;

    puts("Introducir un número entero de 5 dígitos:");
    scanf("%d%d%d%d%d", &n1, &n2, &n3, &n4, &n5);

    printf("%d   %d   %d   %d   %d\n", n1, n2, n3, n4, n5);

    return 0;
}
