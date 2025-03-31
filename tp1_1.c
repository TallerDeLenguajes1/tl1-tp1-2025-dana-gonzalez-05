#include <stdio.h>
#include <stdlib.h>

void main()
{
    printf("Hola mundo\n");

    // Declaracion de la variable y el puntero
    int num = 100;
    int *punt = &num;

    // Imprimir el contenido del puntero
    printf("1) El contenido del puntero: %d\n", *punt);

    // Imprimir la direccion de memoria almacenada por el puntero
    printf("2) La direccion de memoria almacenada por el puntero: %p\n", punt);

    // Imprimir la direccion de memoria de la variable
    printf("3) La direccion de memoria de la variable: %p\n", &num);

    // Imprimir la direccion de memoria del puntero
    printf("4) La direccion de memoria del puntero: %p\n", &punt);

    // Imprimir el tamaño de memoria utilizado por la variable
    // printf("5) El tamanio de memoria utilizado por la variable: %zu bytes\n", sizeof(num));
}
