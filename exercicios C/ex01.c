#include<stdio.h>
#include<stdlib.h>

int main(){

    // declara uma string com tamanho máximo de 50 caracteres
    char nome[50];
    int idade;

    printf("Digite seu nome: ");
    fgets(nome, 50, stdin);

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Olá %s Você tem %d anos \n", nome, idade);

    system("pause");
    return 0;
}

