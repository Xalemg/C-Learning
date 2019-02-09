#include <stdio.h>

void cubo(int *n);

int main () {

    int num = 5;
    printf("Original %i\n", num);
    cubo(&num);
        printf("Nuevo %i\n", num);
    return 0;
}

void cubo (int *n) {
    *n = *n * *n * *n ;
}