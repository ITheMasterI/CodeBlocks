#include <stdio.h>


struct Alunos{


int matricula;
char nome[255];
int codDisciplina;
float nota1;
float nota2;
float media;

};


int main(){


int i;
int N;
struct Alunos alunos[N];

  printf("Insira a quantidade de alunos > 0 ou <= 10: ");
  scanf("%d", &N);

   if(N > 10 || N <= 0){
     do{

       printf("\nValor incorreto, insira novamente: ");
       scanf("%d", &N);

     }while (N > 10 || N <= 0);
   }




for(i = 0; i < N; i++){

    printf("Aluno %d", i);

    printf("\nNumero da matricula: ");
    scanf("%d%*c", &alunos[i].matricula);

    printf("Nome: ");
    scanf(" %s[^\n]%*c", alunos[i].nome);

    printf("Codigo da Disciplina: ");
    scanf("%d%*c", &alunos[i].codDisciplina);

    printf("Nota 1: ");
    scanf("%f%*c", &alunos[i].nota1);

    printf("Nota 2: ");
    scanf("%f%*c", &alunos[i].nota2);

    printf("\n");

}

//float media = 0;
struct Alunos medias[N];
struct Alunos valor1, valor2;

for(i = 0; i < N; i++){

    //medias = ((alunos[i].nota1 * 1.0) + (alunos[i].nota2 * 2.0)) / 3.0;
    valor1.nota1 = alunos[i].nota1 * 1.0;
    valor2.nota2 = alunos[i].nota2 * 2.0;
    medias[i].media = (valor1.nota1 + valor2.nota2) / 3.0;

}

for(i = 0; i < N; i++){

   printf("\nAluno %d, Media: %f", i, medias[i].media);

}




return 0;
}

