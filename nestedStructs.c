#include <stdio.h>

#define LENGTH 2

struct Owner{
    char name [20];
    char address [30];
};



struct Dog{
    char name[20];
    int months;
    struct Owner dogOwner;
} dogs [LENGTH];


int main(int argc, char const *argv[])
{
    for(int i = 0; i < LENGTH; i++){
        printf("Nombre del perro: \n");
        scanf("%s", dogs[i].name);
        printf("Edad del perro en meses: \n");
        scanf("%i", &dogs[i].months);
        printf("Nombre del dueño: \n");
        scanf("%s", dogs[i].dogOwner.name);
        printf("Direccion del dueño: \n");
        scanf("%s", dogs[i].dogOwner.address);
    }

    for(int i = 0; i < LENGTH; i++)
    {
        printf("Nombre del perro: %s\n", dogs[i].name);
        printf("Edad del perro: %i\n", dogs[i].months);
        printf("Nombre del dueño: %s\n", dogs[i].dogOwner.name);
        printf("Direccion del perro: %s\n", dogs[i].dogOwner.address);
    }
    

    return 0;
}
