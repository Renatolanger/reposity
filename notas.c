#include <stdio.h>

int main(){

    float notas[5][5];
    int media;

    int i, j;

    for(i = 0; i < 5; i++){
        printf("Digite as notas dos alunos:\n");
        scanf("%f", &notas[i]);
        fflush(stdin);
    }
    for(j = 0; j < 5; j++){
        for(i = 0; i < 5; i++){
            printf("%f", &notas[i][j]);
            media += notas[i][j];
            

            return 0;
        }
    }
}
