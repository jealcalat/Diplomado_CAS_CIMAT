/*
* Tema 6: Estructuras de control: condicionales
 *
 * Este programa de ejemplo muestra el uso de estructuras de control condicionales en C,
 * incluyendo las sentencias `if`, `else if`, y `else`.
 *
 * Autor: Jose Jesus Rocha Quezada   -  chuche@cimat.mx
 * Modulo 1: Introducción a C  - Tronco Comun
 */

#include <stdio.h>  // Incluir la biblioteca estándar de entrada y salida

int main() {
    // Ejemplo de sentencia `if`
    int edad = 18;

    if (edad >= 18) {
        printf("Eres mayor de edad.\n");
    }

    // Ejemplo de sentencia `if-else`
    int nota = 75;

    if (nota >= 80) {
        printf("Aprobado.\n");
    } else {
        printf("Reprobado.\n");
    }

    // Ejemplo de sentencia `if-else if-else`
    int dia_semana = 3;

    if (dia_semana == 1) {
        printf("Lunes.\n");
    } else if (dia_semana == 2) {
        printf("Martes.\n");
    } else if (dia_semana == 3) {
        printf("Miércoles.\n");
    } else if (dia_semana == 4) {
        printf("Jueves.\n");
    } else if (dia_semana == 5) {
        printf("Viernes.\n");
    } else if (dia_semana == 6) {
        printf("Sábado.\n");
    } else if (dia_semana == 7) {
        printf("Domingo.\n");
    } else {
        printf("Día inválido.\n");
    }

    // Ejemplo de uso de operadores de comparación y lógicos en condicionales
    int hora = 14;
    int es_fin_de_semana = 0;  // 0 para falso, 1 para verdadero

    if (hora >= 9 && hora <= 17 && !es_fin_de_semana) {
        printf("Estás en horario laboral.\n");
    } else {
        printf("No estás en horario laboral.\n");
    }

    return 0;
}