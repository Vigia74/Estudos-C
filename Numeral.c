#include <stdio.h>
#include <cs50.h>

int main(void){
    int x = get_int("Qual o Número de X? ");
    int y = get_int("Qual o Número de Y? ");

    if (x > y){
        printf("X é Maior que Y\n");
    }
    else if (x < y){
        printf('X é menor que Y\n');
    }
    else if (X == Y){
        printf('X é igual a Y\n');
    }
}