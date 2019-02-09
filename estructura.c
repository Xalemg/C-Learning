
#include <stdio.h>
struct perro
{
    char nombre [30];
    int edadMeses;
    float peso;
} perro1 = {"Chikorita", 10, 3.50},
perro2 = {"Arduino", 4, 2.5};

int main(int argc, char const *argv[])
{
    printf("El nombre de nuestra mascota es: %s\n",perro2.nombre);
    return 0;
}
