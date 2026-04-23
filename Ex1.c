#include <stdio.h>;

int main(){

    float produto, total, aliquota;
    int opcao;


    do
    {
        printf("Digite o valor do produto: \n");
        scanf("%f",&produto);
        printf("Seleciona abaixo a aliquota da UF que deseja: \n");
        printf("1 - RS (%%17) \n");
        printf("2 - SP (%%12) \n");
        printf("3 - RJ (%%20) \n");
        printf("4 - SC (%%10) \n");
        printf("5 - Sair do programa \n");

        
        
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            aliquota = 0.17;
            break;
        case 2:
            aliquota = 0.12;
            break;
        case 3:
            aliquota = 0.20;
            break;
        case 4:
            aliquota = 0.10;
            break;
        case 5:
            printf("Fechando o programa... \n");
            break;
        
        default:
            printf("Escolha invalida \n");
            continue;
            break;
        }
        if (opcao != 5){
            total = produto * (1 + aliquota);
            printf("O valor do produto com a aliquota foi de: R$ %.f\n", total);
        }        
    } while ("");
    return 0;
}