//
// Created by Emmanuel Alcala on 23/02/26.
//

#include <stdio.h>

void print_separator(char character, int count) {
    for (int i = 1; i <= count; i++) {
        printf("%c", character);
    }
    printf("\n");
}

int main() {
    print_separator('=', 12);
    printf("Hola Mundo\n");
    print_separator('=', 12);
    return 0;
}