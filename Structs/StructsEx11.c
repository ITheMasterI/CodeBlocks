#include <stdio.h>



struct Alunos{

char nome[255];
int matricula;
float mediaFinal;

};





int main(){


struct Alunos alunos;

int vetor[10];
int i;


for(i = 0; i < 10; i++){

    printf("Aluno %d", i);

    printf("Nome: ");
    scanf("%s[^\n]%*c", nome);

    printf("Numero da matricula: ");
    scanf("%d", &matricula);

    printf("Media final: ");
    scanf("%f", &mediaFinal);

}








return 0;
}
