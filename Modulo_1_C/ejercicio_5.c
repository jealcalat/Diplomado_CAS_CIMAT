/*
 * Tema 5: Operadores y expresiones
 *
 * Este programa de ejemplo muestra el uso de operadores y expresiones en C,
 * incluyendo operadores aritméticos, de comparación, lógicos y la precedencia de operadores.
 *
 * Autor: Jose Jesus Rocha Quezada   -  chuche@cimat.mx
 * Modulo 1: Introducción a C  - Tronco Comun
 */

#include <stdio.h>  // Incluir la biblioteca estándar de entrada y salida

int main() {
    // Operadores aritméticos
    int a = 10;
    int b = 3;

    int suma = a + b;  // Suma
    int resta = a - b;  // Resta
    int multiplicacion = a * b;  // Multiplicación
    int division = a / b;  // División
    int modulo = a % b;  // Módulo (resto de la división)

    printf("Operadores aritméticos:\n");
    printf("Suma: %d\n", suma);
    printf("Resta: %d\n", resta);
    printf("Multiplicación: %d\n", multiplicacion);
    printf("División: %d\n", division);
    printf("Módulo: %d\n", modulo);
    printf("\n");

    // Operadores de comparación
    int x = 5;
    int y = 8;

    int igual = (x == y);  // Igual a
    int diferente = (x != y);  // Diferente de
    int mayor_que = (x > y);  // Mayor que
    int menor_que = (x < y);  // Menor que
    int mayor_o_igual = (x >= y);  // Mayor o igual que
    int menor_o_igual = (x <= y);  // Menor o igual que

    printf("Operadores de comparación:\n");
    printf("Igual: %d\n", igual);
    printf("Diferente: %d\n", diferente);
    printf("Mayor que: %d\n", mayor_que);
    printf("Menor que: %d\n", menor_que);
    printf("Mayor o igual que: %d\n", mayor_o_igual);
    printf("Menor o igual que: %d\n", menor_o_igual);
    printf("\n");

    // Operadores lógicos
    int p = 1;  // Verdadero
    int q = 0;  // Falso

    int and_logico = (p && q);  // AND lógico
    int or_logico = (p || q);  // OR lógico
    int not_logico = !p;  // NOT lógico

    printf("Operadores lógicos:\n");
    printf("AND lógico: %d\n", and_logico);
    printf("OR lógico: %d\n", or_logico);
    printf("NOT lógico: %d\n", not_logico);
    printf("\n");

    // Precedencia de operadores
    int resultado = 5 + 3 * 2;  // Multiplicación tiene mayor precedencia que suma
    printf("Precedencia de operadores:\n");
    printf("5 + 3 * 2 = %d\n", resultado);

    resultado = (5 + 3) * 2;  // Paréntesis tiene mayor precedencia
    printf("(5 + 3) * 2 = %d\n", resultado);

    return 0;
}