/*
* Tema 7: Estructuras de control: bucles
 *
 * Este programa de ejemplo muestra el uso de estructuras de control de bucles en C,
 * incluyendo los bucles `for`, `while`, y `do-while`, así como el uso de las sentencias `break` y `continue`.
 *
 * Autor: Jose Jesus Rocha Quezada   -  chuche@cimat.mx
 * Modulo 1: Introducción a C  - Tronco Comun
 */

#include <stdio.h>  // Incluir la biblioteca estándar de entrada y salida

int main() {
    // Bucle `for`
    printf("Bucle `for`:\n");
    for (int i = 0; i < 5; i++) {
        printf("Iteración %d\n", i);
    }
    printf("\n");

    // Bucle `while`
    printf("Bucle `while`:\n");
    int j = 0;
    while (j < 5) {
        printf("Iteración %d\n", j);
        j++;
    }
    printf("\n");

    // Bucle `do-while`
    printf("Bucle `do-while`:\n");
    int k = 0;
    do {
        printf("Iteración %d\n", k);
        k++;
    } while (k < 5);
    printf("\n");

    // Uso de `break` en un bucle `for`
    printf("Uso de `break` en un bucle `for`:\n");
    for (int i = 0; i < 10; i++) {
        if (i == 5) {
            break;  // Termina el bucle cuando i es igual a 5
        }
        printf("Iteración %d\n", i);
    }
    printf("\n");

    // Uso de `continue` en un bucle `while`
    printf("Uso de `continue` en un bucle `while`:\n");
    int l = 0;
    while (l < 10) {
        l++;
        if (l % 2 == 0) {
            continue;  // Salta a la siguiente iteración si l es par
        }
        printf("Iteración %d\n", l);
    }
    printf("\n");

    return 0;
}