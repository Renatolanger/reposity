#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
typedef struct data DATA;

struct data{
    int dia;
    int mes;
    int ano;
};

typedef struct contato CONTATO;
struct contato{
    char nome[30];
    char fone[15];
    DATA aniv;
};

void main (){
    setlocale(LC_ALL, "Portuguese");
    int opcao;

    do{
        printf("1 - Inserir\n");
        printf("2 - Remover\n");
        printf("3 - Pesquisar pelo nome\n");
        printf("4 - Listar\n");
        printf("5 - Listar por uma inicial\n");
        printf("6 - Imprimir aniversariantes do mes\n");
        printf("7 - Sair\n");
        printf("%d", &opcao);

        switch(opcao){
            case 1:
               printf("Inserir\n");
               break;
            
            case 2:
               printf("Remover\n");
               break;

            case 3:
               printf("Pesquisar pelo nome\n");
               break;

            case 4:
               printf("Listar\n");
               break;

            case 5:
               printf("Listar por uma inicial\n");
               break;

            case 6:
               printf("Imprimir aniversariantes do mes\n");
               break;

            case 7:
               printf("Obrigado por sua visita!\n");
               getch();
               break;

            default:
               printf("Opcao invalida!\n");
               getch();
               break;
        } 
    }while(opcao != );            
}



    

