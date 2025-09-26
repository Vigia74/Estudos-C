#include <stdio.h>
#include <cs50.h>

int main(void){
    int c = get_char("Você Concorda? (Y/N) ");

    if (c == 'Y'){}
        printf('Você Concorda!\n');
    }
    else if (c == 'N'){
        printf('VocÇe Não concorda!\n');
    }
    else if (c == 'y'){
        printf('Você Concorda!\n');
    }
    else if (c == 'n'){
        printf("Você não Concorda!\n");
    }
}