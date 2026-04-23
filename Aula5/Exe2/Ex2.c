#include <stdio.h>;

int main(){

    int idade;
    printf("Digite sua idade: \n");
    scanf("%d",&idade);

    if (idade >= 5 && idade <=7){
        printf("Categoria infantial A");
    } else if (idade >= 8 && idade <= 10){
        printf("Categoria infantil B");
    } else if (idade >= 11 && idade <= 13){
        printf("Categoria juvenil A");
    }else if (idade >=14 && idade <= 17){
        printf("Categoria juvenil B");
    } else {
        printf("Adulto");
    }
    
    return 0;
}
//para rodar ./Ex2.exe