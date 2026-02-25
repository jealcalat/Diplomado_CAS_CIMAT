/*
 * Tema 9: Arreglos (Arrays)
 *
 * Este programa de ejemplo muestra el uso de arreglos (arrays) en C,
 * incluyendo la creación y manipulación de arreglos, el acceso a elementos de un arreglo,
 * y el uso de arreglos multidimensionales.
 *
 * Autor: Jose Jesus Rocha Quezada   -  chuche@cimat.mx
 * Modulo 1: Introducción a C  - Tronco Comun
 */

#include <stdio.h>  // Incluir la biblioteca estándar de entrada y salida
// Uso de arreglos como parámetros de funciones
void imprimir_arreglo(int arr[], int tamano) {
    printf("Arreglo pasado como parámetro:\n");
    for (int i = 0; i < tamano; i++) {
        printf("Elemento %d: %d\n", i, arr[i]);
    }
}

int main() {
    // Creación y manipulación de un arreglo unidimensional
    int numeros[5];  // Declaración de un arreglo de 5 enteros

    // Asignación de valores a los elementos del arreglo
    for (int i = 0; i < 5; i++) {
        numeros[i] = i + 1;
    }

    // Acceso y modificación de elementos del arreglo
    numeros[2] = 10;  // Modifica el tercer elemento del arreglo

    // Imprimir los elementos del arreglo
    printf("Arreglo unidimensional:\n");
    for (int i = 0; i < 5; i++) {
        printf("Elemento %d: %d\n", i, numeros[i]);
    }
    printf("\n");

    // Creación y manipulación de un arreglo bidimensional
    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };  // Declaración de un arreglo bidimensional de 3x3 enteros

    // Acceso y modificación de elementos del arreglo bidimensional
    matriz[1][1] = 0;  // Modifica el elemento en la segunda fila y segunda columna

    // Imprimir los elementos del arreglo bidimensional
    printf("Arreglo bidimensional:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");


    // Llamada a la función para imprimir el arreglo unidimensional
    imprimir_arreglo(numeros, 5);

    return 0;
}