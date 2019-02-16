
#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    char *nombre;
    struct node *next;
}Libro;

int *listaLibros(Libro *lista){
    lista = NULL;
    return lista;
}

int main(int argc, char const *argv[])
{
    Libro *lista = listaLibros(lista);
    return 0;
}
