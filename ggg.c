#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

     setlocale(LC_ALL,"");

     printf("Quantos numeros voce quer digitar?");
     int qtd;
     scanf("%d", &qtd);

     int numeros[qtd];
     int i;

     for(i = 0; i < qtd; i++){
        printf("Digite um numero:");
        fflush(stdin);
        scanf("%d", &numeros[i]);
     }

     printf("Os numeros digitados foram\n");
      for(i = 0; i < qtd; i++){
        printf("%d", numeros[i]);
      }
}


    
