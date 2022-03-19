/* 2.19 (Arithmetic, Largest Value and Smallest Value) Write a program that
 * inputs three different integers from the keyboard, then displays the sum,
 * the average, the product, the smallest and the largest of these numbers.
 * Use only the single-selection form of the if statement you learned in this
 * chapter. The screen dialogue should appear as follows:
 * --------------------------------------------------------
 * Enter three different integers: 13 27 14
 * Sum is 54 
 * Average is 18 
 * Product is 4914 
 * Smallest is 13 
 * Largest is 27
 * --------------------------------------------------------
 */

#include <stdio.h>

int main(void)
{
    int n1, n2, n3; 

    // Introducir datos
    puts("Introduce tres números enteros: ");
    scanf("%d%d%d", &n1, &n2, &n3);

    printf("La suma sería: %d\n", n1 + n2 + n3);
    printf("La media sería: %d\n", (n1 + n2 + n3) / 3);
    printf("El producto sería: %d\n", n1 * n2 *n3);

    // Buscando el más pequeño...
    if ((n1 < n2 ) && (n1 < n3)) {
        printf("El más pequeño es: %d\n", n1);
    }
    if ((n2 < n1) && (n2 < n3)) {
        printf("El más pequeño es: %d\n", n2);
        }
    if ((n3 < n1) && (n3 < n2)) {
        printf("El más pequeño es: %d\n", n3);
    }

    // Buscando el más grande...
    if ((n1 > n2 ) && (n1 > n3)) {
        printf("El más grande es: %d\n", n1);
    }
    if ((n2 > n1) && (n2 > n3)) {
        printf("El más grande es: %d\n", n2);
        }
    if ((n3 > n1) && (n3 > n2)) {
        printf("El más grande es: %d\n", n3);
    }

    return 0;
}
