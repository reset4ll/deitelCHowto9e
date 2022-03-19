/* 2.29 (Sort in Ascending Order) Write a program that inputs three different
 * numbers from the user. Display the numbers in increasing order. Recall that
 * an if statement’s body can contain more than one statement. Prove that your
 * script works by running it on all six possible orderings of the numbers.
 * Does your script work with duplicate numbers?
 */

#include <stdio.h>

int main(void)
{
    int n1, n2, n3;
    int mayor, mediano, menor;

    puts("Introducir tres números enteros diferentes:");
    scanf("%d%d%d", &n1, &n2, &n3);

    // Número 1
    if ((n1 > n2 ) && (n2 > n3)) {
        mayor = n1;
        mediano = n2;
        menor = n3;
        printf("%d %d %d\n", menor, mediano, mayor);
    }
    if ((n1 > n3) && (n3 > n2)) {
        mayor = n1;
        mediano = n3;
        menor = n2;
        printf("%d %d %d\n", menor, mediano, mayor);
    }
    // Número 2
    if ((n2 > n1) && (n1 > n3)) {
        mayor = n2;
        mediano = n1;
        menor = n3;
        printf("%d %d %d\n", menor, mediano, mayor);
    }
    if ((n2 > n3) && (n3 > n1)) {
        mayor = n2;
        mediano = n3;
        menor = n1;
        printf("%d %d %d\n", menor, mediano, mayor);
    }
    // Número 3
    if ((n3 > n2) && (n2 > n1)) {
        mayor = n3;
        mediano = n2;
        menor = n1;
        printf("%d %d %d\n", menor, mediano, mayor);
    }
    if ((n3 > n1) && (n1 > n2)) {
        mayor = n3;
        mediano = n1;
        menor = n2;
        printf("%d %d %d\n", menor, mediano, mayor);
    }

    return 0;
}
