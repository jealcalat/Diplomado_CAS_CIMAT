//
// Created by Emmanuel Alcala on 26/02/26.
//

#include <stdio.h>
#define CUADRADO(x) ((x) * (x))

void print_separator(char character, int count) {
    for (int i = 0; i < count; i++) {
        printf("%c", character);
    }
    printf("\n");
}

int main(void) {
    int  num = 5;
    int  resultado = CUADRADO(num);
    // usar puntero de num
    int *ptr = &num;
    printf("El cuadrado de %d es: %d\n", num, resultado);
    // modificar num a 10 usando su puntero
    *ptr = 10;
    int resultado10 = CUADRADO(num);
    printf("El cuadrado de %d es: %d\n", num, resultado10);
    // punteros con arreglos;
    int arreglo[5] = {1, 2, 3, 4, 5};
    int *a = arreglo;
    print_separator('-', 40);
    printf("int *a = arreglo toma el primer valor del arreglo, 1.\n");
    printf("-> %d\n", *a);
    for (int i = 0; i < 5; i++) {
        printf("arreglo[%d] antes de cambiar puntero: %d\n", i, arreglo[i] );
    }
    *a = 10;
    print_separator('-', 40);
    for (int i = 0; i < 5; i++) {
        printf("arreglo[%d] después: %d\n", i, arreglo[i] );
    }
    return 0;
}