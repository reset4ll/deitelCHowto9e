/* 2.20 (Circle Area, Diameter and Circumference) For a circle of radius 2,
 * display the diameter, circumference and area. Use the value 3.14159 for π.
 * Use the following formulas (r is the radius):
 * diameter = 2r, circumference = 2πr and area = πr2.
 * Perform each of these calculations inside the printf statement(s) and use
 * the conversion specification %f.
 */

#include <stdio.h>

#define PI 3.14159

int main(void)
{
    float radio;

    // Introducir el radio
    puts("Introduce el radio:");
    scanf("%f", &radio);

    // Calcula e imprime los valores
    printf("El diámetro es: %.2f\n", 2 * radio);
    printf("La circunferencia vale: %.2f\n", 2 * PI * radio);
    printf("El area vale: %.2f\n", PI * radio * 2);

    return 0;
}

