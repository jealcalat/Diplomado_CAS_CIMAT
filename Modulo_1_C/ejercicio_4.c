/*
* Tema 4: Variables y tipos de datos
 *
 * Este programa de ejemplo muestra cómo declarar y asignar variables,
 * los tipos de datos básicos en C, y la conversión de tipos de datos.
 *
 * Autor: Jose Jesus Rocha Quezada   -  chuche@cimat.mx
 * Modulo 1: Introducción a C  - Tronco Comun
 */

#include <stdio.h>  // Incluir la biblioteca estándar de entrada y salida

int main() {
    // Declaración y asignación de variables
    int edad = 25;  // Variable de tipo entero
    float altura = 1.75;  // Variable de tipo flotante
    char inicial = 'J';  // Variable de tipo carácter
    char nombre[] = "Juan";  // Variable de tipo cadena de caracteres

    // Imprimir los valores de las variables
    printf("Edad: %d\n", edad);
    printf("Altura: %.2f\n", altura); // %.2f imprimir con dos decimales
    printf("Inicial: %c\n", inicial); // %c para imprimir solo un caracter
    printf("Nombre: %s\n", nombre);   // %s para imprimir cadenas

    // Tipos de datos básicos
    int entero = 10;  // Entero
    float flotante = 3.14;  // Flotante
    double doble = 2.71828;  // Doble precisión
    char caracter = 'A';  // Carácter
    _Bool booleano = 1;  // Booleano (0 para falso, 1 para verdadero)

    // Imprimir los valores de los tipos de datos básicos
    printf("Entero: %d\n", entero);
    printf("Flotante: %.2f\n", flotante);
    printf("Doble: %.5f\n", doble);
    printf("Caracter: %c\n", caracter);
    printf("Booleano: %d\n", booleano);

    // Conversión de tipos de datos (casting)
    int a = 10;
    float b = 3.5;
    float resultado = a + b;  // Conversión implícita de int a float
    printf("Resultado de a + b: %.2f\n", resultado);

    int c = (int)b;  // Conversión explícita de float a int
    printf("Valor de c después de casting: %d\n", c);

    return 0;
}