#include <stdio.h>
int main(){
    int num1;
    int num2;
    int resultado;
    int a = 12;
    int b = 3;
    printf("Introduce los numeros a sumar\n");
    scanf("%d", &num1);
    printf("Introduce el segund valor\n");
    scanf("%d", &num2);
    resultado = num1 + num2;
    printf("El resultado de la suma es: %d\n", resultado );
    return 0;
}