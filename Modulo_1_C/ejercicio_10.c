/*
 * Tema 10: Punteros
 *
 * Este programa de ejemplo muestra el uso de punteros en C,
 * incluyendo la declaración y uso de punteros, operaciones con punteros,
 * punteros y arreglos, y punteros a funciones.
 *
 * Autor: Jose Jesus Rocha Quezada   -  chuche@cimat.mx
 * Modulo 1: Introducción a C  - Tronco Comun
 */

#include <stdio.h>  // Incluir la biblioteca estándar de entrada y salida

// Función para demostrar el uso de punteros
void ejemplo_punteros() {
    int numero = 10;  // Variable entera
    int *ptr;  // Puntero a un entero

    ptr = &numero;  // Asigna la dirección de `numero` a `ptr`

    printf("Valor de numero: %d\n", numero);
    printf("Dirección de numero: %p\n", (void *)&numero);
    printf("Valor de ptr: %p\n", (void *)ptr);
    printf("Valor apuntado por ptr: %d\n", *ptr);
    printf("\n");
}

// Función para demostrar operaciones con punteros
void operaciones_punteros() {
    int arr[5] = {1, 2, 3, 4, 5};  // Arreglo de enteros
    int *ptr = arr;  // Puntero al primer elemento del arreglo

    printf("Arreglo usando punteros:\n");
    for (int i = 0; i < 5; i++) {
        printf("Elemento %d: %d\n", i, *(ptr + i));
    }
    printf("\n");
}

// Función para demostrar punteros y arreglos
void punteros_arreglos() {
    int arr[5] = {1, 2, 3, 4, 5};  // Arreglo de enteros
    int *ptr = arr;  // Puntero al primer elemento del arreglo

    printf("Arreglo usando punteros:\n");
    for (int i = 0; i < 5; i++) {
        printf("Elemento %d: %d\n", i, *(ptr + i));
    }
    printf("\n");
}

// Función para demostrar punteros a funciones
void funcion_ejemplo() {
    printf("Función llamada a través de un puntero.\n");
}

int main() {
    // Ejemplo de uso de punteros
    ejemplo_punteros();

    // Ejemplo de operaciones con punteros
    operaciones_punteros(); 

    // Ejemplo de punteros y arreglos
    punteros_arreglos();

    // Ejemplo de punteros a funciones
    void (*ptr_funcion)() = funcion_ejemplo;  // Puntero a una función
    ptr_funcion();  // Llamada a la función a través del puntero

    return 0;
}