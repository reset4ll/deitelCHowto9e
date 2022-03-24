/* 3.17 (Credit-Limit Calculator) Develop a C program that will determine
 * whether a department-store customer has exceeded the credit limit on a charge
 * account. For each customer, the following facts are available:
 *
 * a) Account number
 * b) Balance at the beginning of the month
 * c) Total of all items charged by this customer this month
 * d) Total of all credits applied to this customer's account this month
 * e) Allowed credit limit
 *
 * The program should use scanf to input each fact, calculate the
 * new balance (= beginning balance + charges – credits), and determine whether
 * the new balance exceeds the customer's credit limit. For those customers
 * whose credit limit is exceeded, the program should display the customer's
 * account number, credit limit, new balance and the message “Credit limit
 * exceeded.
 */

#include <stdio.h>

int main(void)
{
    int num_cuenta;
    double saldo_ini, cargo_tot, credit_tot, limite;
    double nuevo_saldo = 0L;

    // Inicio
    printf("%s", "\nIntroducir número de cuenta (-1 para salir): ");
    scanf("%d", &num_cuenta); // Número de cuenta

    // Bucle
    while (num_cuenta != -1) {  // Centinela salida
        printf("%s", "Introducir saldo inicial: ");
        scanf("%lf", &saldo_ini); // Saldo inicial

        printf("%s", "Introducir cargo total: ");
        scanf("%lf", &cargo_tot); // Cargo total

        printf("%s", "Introducir total del crédito: ");
        scanf("%lf", &credit_tot); // Total del crédito

        printf("%s", "Introducir límite del crédito: ");
        scanf("%lf", &limite);

        // Computar el nuevo saldo
        nuevo_saldo = (saldo_ini + cargo_tot - credit_tot);

        // Aviso
        if (nuevo_saldo > limite) {
            printf("Número de cuenta: %d\n", num_cuenta);
            printf("Límite del crédito: %.2f\n", limite);
            printf("Nuevo saldo: %.2f\n", nuevo_saldo);
            printf("Límite de crédito excedido!\n");
        }  // Fin if

        // Comienzo del ciclo
        printf("%s", "\nIntroducir número de cuenta (-1 para salir): ");
        scanf("%d", &num_cuenta); // Número de cuenta
    } // Fin while

    return 0;
}




