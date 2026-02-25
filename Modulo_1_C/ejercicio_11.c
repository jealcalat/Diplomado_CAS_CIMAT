/*
* Tema 11: Cadenas de texto (Strings)
 *
 * Este programa de ejemplo muestra el uso de cadenas de texto (strings) en C,
 * incluyendo la manipulación de cadenas, funciones comunes de cadenas, y formateo de cadenas.
 *
 * Autor: Jose Jesus Rocha Quezada   -  chuche@cimat.mx
 * Modulo 1: Introducción a C  - Tronco Comun
 */

#include <stdio.h>  // Incluir la biblioteca estándar de entrada y salida
#include <string.h>  // Incluir la biblioteca estándar de manipulación de cadenas

int main() {
    // Declaración y manipulación de cadenas
    char cadena1[] = "Hola";
    char cadena2[] = "Mundo";
    char cadena3[50];

    // Copiar una cadena
    strcpy(cadena3, cadena1);
    printf("Cadena copiada: %s\n", cadena3);

    // Concatenar cadenas
    strcat(cadena3, " ");
    strcat(cadena3, cadena2);
    printf("Cadena concatenada: %s\n", cadena3);

    // Obtener la longitud de una cadena
    int longitud = strlen(cadena3);
    printf("Longitud de la cadena: %d\n", longitud);

    // Comparar cadenas
    int comparacion = strcmp(cadena1, cadena2);
    if (comparacion == 0) {
        printf("Las cadenas son iguales.\n");
    } else if (comparacion < 0) {
        printf("La cadena1 es menor que la cadena2.\n");
    } else {
        printf("La cadena1 es mayor que la cadena2.\n");
    }

    // Formateo de cadenas
    char buffer[100];
    int edad = 25;
    float altura = 1.75;
    char nombre[] = "Juan";

    sprintf(buffer, "Nombre: %s, Edad: %d, Altura: %.2f", nombre, edad, altura);
    printf("Cadena formateada: %s\n", buffer);

    return 0;
}