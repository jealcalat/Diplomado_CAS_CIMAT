/*
* Tema 8: Funciones
 *
 * Este programa de ejemplo muestra el uso de funciones en C,
 * incluyendo la definición y llamada de funciones, el uso de parámetros y argumentos,
 * el retorno de valores, y el uso de funciones con parámetros por referencia.
 *
 * Autor: Jose Jesus Rocha Quezada   -  chuche@cimat.mx
 * Modulo 1: Introducción a C  - Tronco Comun
 */

#include <stdio.h>  // Incluir la biblioteca estándar de entrada y salida

// Definición de una función simple
void saludar() {
    printf("Hola, mundo!\n");
}

// Definición de una función con parámetros
int suma(int a, int b) {
    return a + b;
}

// Definición de una función con parámetros por referencia
void incrementar(int *a) {
    (*a)++;
}

// Definición de una función lambda (simulada con una macro)
#define CUADRADO(x) ((x) * (x))

int main() {
    // Llamada a una función simple
    saludar();

    // Llamada a una función con parámetros
    int resultado = suma(3, 5);
    printf("Resultado de la suma: %d\n", resultado);

    // Uso de una función con parámetros por referencia
    int numero = 10;
    incrementar(&numero);
    printf("Número después de incrementar: %d\n", numero);

    // Uso de una función lambda (simulada con una macro)
    int cuadrado = CUADRADO(5);
    printf("Cuadrado de 5: %d\n", cuadrado);

    return 0;
}