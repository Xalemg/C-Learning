
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LENGHT 2

int size;

struct perro{
    char name [30];
    char *p_name;
}dogs[LENGHT];


int main(int argc, char const *argv[]){
    
    int n = 10;
    char *pointer;

    pointer = malloc(n*sizeof(char));

    for(int i = 0; i < LENGHT; i++){
        printf("Ingrese el nombre del perro: \n");
        scanf("%s",dogs[i].name);
        size = strlen(dogs[i].name);
        printf("%i\n", size);
        dogs[i].p_name = malloc(size * sizeof(char));
        if (NULL == dogs[i].p_name) {
            printf("Error al asignar memoria\n");
        } else {
            strcpy(dogs[i].p_name, dogs[i].name);
            printf("Asignamos la mermoria\n");
        }   
    }
    for(int i = 0; i < LENGHT; i++){
        printf("Nombre del perro: %s\n", dogs[i].p_name);
    }
    return 0;
}
