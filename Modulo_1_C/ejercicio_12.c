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

void print_separator(char character, int count) {
    printf("%c", character);
    for (int i = 0; i < count; i++) {
        printf("%c", character);
    }
    printf("\n");
}

int main() {
    // Uso de `scanf()` para entrada de datos
    int edad;
    float altura;
    char nombre[50];
    char apellido[30];
    printf("Ingresa tu edad: ");
    scanf("%d", &edad);  // Lee un entero desde la entrada estándar

    printf("Ingresa tu altura (en metros): ");
    scanf("%f", &altura);  // Lee un flotante desde la entrada estándar

    printf("Ingresa tu nombre y apellido: ");
    scanf("%s %s", nombre, apellido);  // Lee una cadena de caracteres desde la entrada estándar

    // Uso de `printf()` para salida de datos
    print_separator('=', 30);
    printf("Información ingresada:\n");
    printf("Nombre y apellido: %s %s\n", nombre, apellido);
    printf("Edad: %d\n", edad);
    printf("Altura: %.2f metros\n", altura);
    print_separator('=', 30);
    // Formateo de salida avanzado
    int numero = 42;
    float pi = 3.14159;
    char inicial = 'J';

    print_separator('=', 30);
    printf("Formateo de salida avanzado:\n");
    printf("Número: %5d\n", numero);  // Ancho de campo de 5 caracteres
    printf("Pi: %.2f\n", pi);  // 2 decimales
    printf("Inicial: %-5c\n", inicial);  // Justificación a la izquierda

    return 0;
}