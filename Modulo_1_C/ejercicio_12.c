/*
* Tema 12: Entrada y salida de datos
 *
 * Este programa de ejemplo muestra el uso de funciones de entrada y salida de datos en C,
 * incluyendo el uso de `scanf()` para entrada de datos y `printf()` para salida de datos,
 * así como el formateo de salida.
 *
 * Autor: Jose Jesus Rocha Quezada   -  chuche@cimat.mx
 * Modulo 1: Introducción a C  - Tronco Comun
 */

#include <stdio.h>  // Incluir la biblioteca estándar de entrada y salida

int main() {
    // Uso de `scanf()` para entrada de datos
    int edad;
    float altura;
    char nombre[50];

    printf("Ingresa tu edad: ");
    scanf("%d", &edad);  // Lee un entero desde la entrada estándar

    printf("Ingresa tu altura (en metros): ");
    scanf("%f", &altura);  // Lee un flotante desde la entrada estándar

    printf("Ingresa tu nombre: ");
    scanf("%s", nombre);  // Lee una cadena de caracteres desde la entrada estándar

    // Uso de `printf()` para salida de datos
    printf("Información ingresada:\n");
    printf("Nombre: %s\n", nombre);
    printf("Edad: %d\n", edad);
    printf("Altura: %.2f metros\n", altura);

    // Formateo de salida avanzado
    int numero = 42;
    float pi = 3.14159;
    char inicial = 'J';

    printf("Formateo de salida avanzado:\n");
    printf("Número: %5d\n", numero);  // Ancho de campo de 5 caracteres
    printf("Pi: %.2f\n", pi);  // 2 decimales
    printf("Inicial: %-5c\n", inicial);  // Justificación a la izquierda

    return 0;
}