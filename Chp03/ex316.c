/* 3.16 (Gas Mileage) Drivers are concerned with the mileage obtained by their
 * automobiles. One driver has kept track of several tankfuls of gasoline by
 * recording miles driven and gallons used for each tankful. Develop a program
 * that uses scanf to input the miles driven and gallons used for each tankful.
 * The program should calculate and display the miles per gallon obtained for
 * each tankful. After processing all input information, the program should
 * calculate and print the combined miles per gallon obtained for all
 * tankfuls.
 */

#include <stdio.h>

int main(void) 
{
    // Inicializa las variables.
    float galones = 0;
    int millas = 0;
    float resultado = 0;
    float total = 0;
    float media = 0;
    int count = 0;

    while (galones != -1) {	// Valor centinela para finalizar
        // Galones
        printf("%s", "Introduce los galones usados (-1 para finalizar): ");
        scanf("%f", &galones);

        if (galones > 0) { // Control
            // Millas
            printf("%s", "Introduce las millas realizadas: ");
            scanf("%d", &millas);

            // Computa el resultado
            resultado = millas / galones;
            printf("Las millas recorridas por galon fueron de: %f\n",
                   resultado);

            // Contabilizar
            total += resultado;
            ++count;

        } else {  // Control
            if (galones == 0) {
                printf("%s", "\nEl valor no puede ser cero!\n");
                return -1; // Saliendo...
            }
        } // Fin if
    } // Fin while

    // Imprime la media
    media = total / (float)count; // Cast
    printf("\nLa media total fue de: %f\n", media);

    return 0;
}
