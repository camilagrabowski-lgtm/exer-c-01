#include<stdio.h>
#include<stdlib.h>

int main(){
    char cidade[50];
    char estado[50];
    int anodeNascimento;
    int idade;

    printf("Digite a cidade onde nasceu: ");
    fgets(cidade, 50, stdin);

    printf("digite o estado onde você nasceu: ");
    fgets(estado, 50, stdin);

    printf("Digite seu ano de nascimento: ");
    scanf("%d", &anodeNascimento);

    idade = 2025 - anodeNascimento;

    printf("Você nasceu em %s no estado de %s voce tem %d anos \n", cidade, estado, idade);


    system("pause");
    return 0;
}