/*
 * Tema 2: Introducción a C
 *
 * Este programa de ejemplo muestra una introducción al lenguaje de programación C,
 * incluyendo su historia, características principales, ventajas y aplicaciones.
 *
 * Autor: Jose Jesus Rocha Quezada   -  chuche@cimat.mx
 * Modulo 1: Introducción a C  - Tronco Comun
 */

#include <stdio.h>

void print_separator(char character, int count) {
    for (int i = 0; i < count; i++) {
        printf("%c", character);
    }
    printf("\n");
}

// Función para mostrar la historia de C
void mostrar_historia_c() {
    print_separator('=', 40);
    printf("Historia de C:\n");
    printf("C fue creado por Dennis Ritchie en los laboratorios Bell "
           "en la década de 1970.\n");
    printf("Inicialmente, C fue desarrollado como un lenguaje para "
           "escribir el sistema operativo UNIX.\n");
    printf("A lo largo de los años, C ha evolucionado y se ha "
           "convertido en uno de los lenguajes de programación "
           "más populares.\n");
    printf("\n");
}

// Función para mostrar las características principales de C
void mostrar_caracteristicas_c() {
    print_separator('=', 40);
    printf("Características principales de C:\n");
    printf("- Eficiencia: C es conocido por su alto rendimiento y eficiencia.\n");
    printf("- Portabilidad: Los programas en C pueden ser compilados y ejecutados en diferentes plataformas.\n");
    printf("- Flexibilidad: C permite un control directo sobre el hardware y la memoria.\n");
    printf("- Simplicidad: La sintaxis de C es simple y fácil de aprender.\n");
    printf("\n");
}

// Función para mostrar las ventajas de C
void mostrar_ventajas_c() {
    print_separator('=', 40);
    printf("Ventajas de C:\n");
    printf("- Eficiencia y rendimiento: C permite escribir código de bajo nivel que se ejecuta rápidamente.\n");
    printf("- Control directo sobre el hardware: C permite acceder a recursos de hardware de manera directa.\n");
    printf("- Amplia comunidad y soporte: Existe una gran cantidad de recursos y bibliotecas disponibles.\n");
    printf("\n");
}

// Función para mostrar las aplicaciones de C
void mostrar_aplicaciones_c() {
    print_separator('=', 40);
    printf("Aplicaciones de C:\n");
    printf("- Desarrollo de sistemas operativos: C es el lenguaje principal para escribir sistemas operativos como UNIX y Linux.\n");
    printf("- Desarrollo de controladores de dispositivos: C se utiliza para escribir controladores de hardware.\n");
    printf("- Aplicaciones de alto rendimiento: C es ideal para aplicaciones que requieren un alto rendimiento, como juegos y aplicaciones científicas.\n");
    printf("\n");
}

int main() {
    printf("Introducción a C\n");
    print_separator('=', 40);
    // Mostrar la historia de C
    mostrar_historia_c();

    // Mostrar las características principales de C
    mostrar_caracteristicas_c();

    // Mostrar las ventajas de C
    mostrar_ventajas_c();

    // Mostrar las aplicaciones de C
    mostrar_aplicaciones_c();

    printf("Proceso de introducción a C completado.\n");
    return 0;
}