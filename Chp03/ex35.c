 /*3.4 Write a C statement to accomplish each of the following tasks.
 * a) Define variable x to be of type int and set it to 1.
 * b) Define variable sum to be of type int and set it to 0.
 * c) Add variable x to variable sum and assign the result to variable sum.
 * d) Print "The sum is: " followed by the value of variable sum.
 *
 * int x = 1;
 * int sum = 0;
 * sum += x;
 * printf("The sum is: %d\n", sum);
 *
 */

 /*  
 * 3.5 Combine the statements from Exercise 3.4 into a program that calculates
 * the sum of the integers from 1 to 10. Use the while statement to loop through
 * the calculation and increment statements. The loop should terminate when x
 * becomes 11.
 */

#include <stdio.h>

int main(void)
{
    int x = 1;
    int suma = 0;

    // Desde 1...10
    while(x <= 10) {
        suma += x;
        printf("%d -> La suma es: %d\n", x, suma);
        x += 1;
    }

    return 0;
}
