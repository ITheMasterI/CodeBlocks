#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct aluno{

char nome[255];
char curso[255];
int matricula;

};


int main(){



struct aluno vetor[5];
int i;



for(i = 0; i < 5; i++){

    printf("Nome[%d]: ", i);
	gets(vetor[i].nome);
	setbuf(stdin, NULL);



	printf("Curso[%d]: ", i);
	gets(vetor[i].curso);
	setbuf(stdin, NULL);

	printf("Numero da matricula[%d]: ", i);
	scanf("%d%*c", &vetor[i].matricula);
	setbuf(stdin, NULL);

	printf("\n");


}




	for(i = 0; i < 5; i++){

    printf("\nNome[%d]: %s", i, vetor[i].nome);
	printf("\nCurso[%d]: %s", i, vetor[i].curso);
	printf("\nMatricula[%d]: %d", i, vetor[i].matricula);

	printf("\n");

}


return 0;
}

