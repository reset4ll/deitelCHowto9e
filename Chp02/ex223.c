/* 2.23 (Multiples) Write a program that reads two integers and determines and
 * displays whether the first is a multiple of the second. Use the remainder
 * operator.
 */

#include <stdio.h>

int main(void)
{
    int n1, n2, result;

    puts("Introducir dos números enteros");
    scanf("%d%d", &n1, &n2);

    result = n1 % n2;

    if (result == 0) {
        printf("Result: %d\n", result);
        puts("El primer número es múltiplo del segundo\n");
    }
    if (result > 0) {
        printf("Result: %d\n", result);
        puts("El primer número no es múltiplo del segundo\n");
    }

    return 0;
}

