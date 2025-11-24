//inclui a biblioteca stdio.h, permite o uso de entrada e saida de valores como o print

#include<stdio.h>
//inclui a biblioteca stdlib.h para funcoes utilitarias como o stystem

#include<stdlib.h>

//inicio da funcao, onde o programa comeca a ser executado
int main(){

    float num1, num2 = 100.45;
    //int num2 = 200;
    
    //printar os numeros das variaveis 
    printf("%f %d", num1, num2);

    //pausa o programa, até que o usuario pressione qualquer tecla
    system("pause");
    //finaliza o programa retornando 0, indicando que deu tudo certo
    return 0;
}