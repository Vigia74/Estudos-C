#include <stdio.h>
#include <cs50.h>

int main(void){
    string answer = get_string("Qual seu Nome? ");
    printf("Olá, %s\n", answer);
}