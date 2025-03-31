#include <stdio.h>

int cuadrado(int num);
void cuadradoVoid(int num, int *resultado);
void mostrarVariable(int *var);
void invertir(int *a, int *b) ;
void orden(int *a, int *b) ;
void leerEImprimir();


int main() {
    leerEImprimir();
    return 0;
}

// a) Función que devuelve el cuadrado de un número
int cuadrado(int num) {
    return num * num;
}

// b) Función que calcula el cuadrado de un número y utiliza tipo void
void cuadradoVoid(int num, int *resultado) {
    *resultado = num * num;
    
}

// c) Mostrar dirección y contenido de una variable
void mostrarVariable(int *var) {
    printf("Contenido de la variable: %d\n", *var);
    printf("Direccion de la variable: %p\n", (void*)var);
}

// d) Invertir los valores entre dos variables
void invertir(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// e) Ordenar dos valores
void orden(int *a, int *b) {
    if (*a > *b) {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
}

// f) Leer pares de valores e imprimirlos
void leerEImprimir() {
    int x, y;
    printf("Ingrese dos valores (separados por espacio): ");
    scanf("%d %d", &x, &y);

    printf("Cuadrado de %d: %d\n", x, cuadrado(x));
    int resultado;
    cuadradoVoid(x, &resultado);
    printf("Cuadrado calculado con void: %d\n", resultado);

    mostrarVariable(&x);

    printf("Valores originales: x = %d, y = %d\n", x, y);
    invertir(&x, &y);
    printf("Valores invertidos: x = %d, y = %d\n", x, y);

    orden(&x, &y);
    printf("Valores ordenados: menor = %d, mayor = %d\n", x, y);
}

