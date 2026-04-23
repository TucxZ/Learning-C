#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int num, try, trys;
    char playagain;

    srand(time(NULL));
    
    do{
        num = rand () % 101;
        trys = 0;
        printf("Adivinhe um numero entre 0 a 100! \n");
        
        do{
            printf("Digite um numero: ");
            scanf("%d", &try);
            
            trys++;

            if (try > num){
                printf("O numero e MENOR que %d\n", try);
            } else if(try < num){
                printf("O numero e MAIOR que %d\n", try);
            } else {
                printf("\n Voce acertou! o numero: %d\n", num);
                printf("numero de tentativas: %d\n", trys);
            }
        } while (try != num);
        printf("\nDeseja jogar novamente? (s/n): ");
        scanf(" %c", &playagain);
    }
     while (playagain == 's' || playagain == 'S');
    printf("\nObrigado por jogar!\n");
    return 0;
} 
