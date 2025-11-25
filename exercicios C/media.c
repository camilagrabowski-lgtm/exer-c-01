//inclui a biblioteca stdio.h que permite usar entrada e saida de infos. (prints e scanf)
#include<stdio.h>

//inclui a biblioteca stdlib.h que permite funções utilitarias (system())
#include<stdlib.h>

//declarar a função principal, omde o programa começa sua execução
int main(){
    float numero1, numero2, numero3, respostaMedia;

    printf("Digite o primeiro número: ");
    scanf("%f", &numero1);
    printf("Digite o segundo número: ");
    scanf("%f", &numero2);
    printf("Digite o terceiro número: ");
    scanf("%f", &numero3);

    respostaMedia = numero1 + numero2 + numero3;
    printf("%.3f", respostaMedia);

    //pausar o sistema até que o usuario pressione qualquer tecla
    system("pause");
    //finaliza o programa retornando 0, indicando que tudo ocorreu bem
    return 0;
}

