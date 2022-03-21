/* 1 Set total to zero
 * 2 Set grade counter to one
 * 3 
 * 4 While grade counter is less than or equal to ten
 * 5 Input the next grade
 * 6 Add the grade into the total
 * 7 Add one to the grade counter
 * 8
 * 9 Set the class average to the total divided by ten 
 * 10 Print the class average
 */

// fig03_02.c
// Calcula las notas medias de una clase controlado con iteración  
// controlada por un contador.

#include <stdio.h>

int main(void) {
    // fase de inicio
    int total = 0;
    int counter = 1;

    // fase de procesado
     while(counter <= 10) {
         printf("%s", "Introducir la nota: ");
         int grade = 0;
         scanf("%d", &grade);
         total = total + grade;
         counter = counter + 1;
     }

     // fase de finalización
    int average = total / 10;
    printf("La media de la clase es: %d\n", average);

    return 0;
}







