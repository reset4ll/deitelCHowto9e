/* The formula for calculating your maximum heart rate in beats per minute is
 * 220 minus your age in years. Your target heart rate is 50–85% of your maximum
 * heart rate. Write a program that prompts for and inputs the user’s age and
 * calculates and displays the user’s maximum heart rate and the range of the
 * user’s target heart rate.
 */

#include <stdio.h>

int main(void)
{
    int edad, ratio, rango_min, rango_max;

    // Edad
    puts("Introduce tu edad:");
    scanf("%d", &edad);

    // Pulsaciones máximas
    ratio = 220 - edad;
    printf("Las pulsaciones máximas para dicha edad son: %d\n", ratio);

    // Rangos máximo y mínimo en 
    rango_min = (ratio * 50) / 100;
    rango_max = (ratio * 85) / 100;

    printf("El rango ideal ha de estar entre %d y %d pulsaciones\n",\
           rango_min, rango_max);

    return 0;
}
