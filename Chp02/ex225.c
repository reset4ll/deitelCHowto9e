/* 2.25 Write a C program that displays the integer equivalents of some
 * uppercase letters, lowercase letters, digits and special symbols.
 * At a minimum, determine the integer equivalents of the following:
 * A B C a b c 0 1 2 $ * + / and the space character.
 */

#include <stdio.h>

int main(void) 
{
    // Imprime los equivalentes enteros
    printf("A = %d, B = %d, C = %d\n", 'A', 'B', 'C');
    printf("a = %d, b = %d, c = %d\n", 'a', 'b', 'c');
    printf("0 = %d, 1 = %d, 2 = %d\n", '0', '1', '2');
    printf("$ = %d, * = %d, / = %d, 'space'= %d\n", '$', '*', '/', ' ');

    return 0;
}
