/*
* Tema 3: Estructura básica de un programa en C
 *
 * Este programa de ejemplo muestra la estructura básica de un programa en C,
 * incluyendo la sintaxis básica, comentarios y el uso de la consola para compilar y ejecutar programas.
 *
 * Autor: Jose Jesus Rocha Quezada   -  chuche@cimat.mx
 * Modulo 1: Introducción a C  - Tronco Comun
 */

#include <stdio.h>  // Incluir la biblioteca estándar de entrada y salida

// Función principal del programa
int main() {
    // Comentario de una línea: Esta línea es un comentario y no se ejecuta

    /*
     * Comentario de múltiples líneas:
     * Este es un comentario de varias líneas que explica el propósito del programa.
     */

    // Imprimir un mensaje en la consola
    printf("Hola, mundo!\n");

    // Retornar 0 para indicar que el programa terminó correctamente
    return 0;
}

/*
 * Compilación y ejecución del programa:
 *
 * 1. Guardar el código fuente en un archivo con extensión .c, por ejemplo, hola_mundo.c
 * 2. Compilar el programa usando un compilador de C, como GCC:
 *    - En la consola, ejecutar: gcc -o hola_mundo hola_mundo.c
 * 3. Ejecutar el programa compilado:
 *    - En la consola, ejecutar: ./hola_mundo
 * 4. Ver el resultado en la consola:
 *    - Debería mostrar el mensaje "Hola, mundo!"
 */
