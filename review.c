#include <stdio.h>
#include <stdlib.h>



int main(){
	
	float nota1, nota2, nota3, nota4, media;

    printf("Digite a primeira nota");
    scanf("%f", &nota1);

    printf("Digite a segunta nota");
    scanf("%f", &nota2);

    printf("Digite a terceira nota");
    scanf("%f", &nota3);

    printf("Digite a quarta nota");
    scanf("%f", &nota4);

    media = (nota1 + nota2 + nota3 + nota4)/4;

    printf("A nota do aluno e: %f\n", media);

    if(media <= 5){
        printf("recuperacao");
    }
    else if(media > 5){
        printf("aprovado");
    }
}