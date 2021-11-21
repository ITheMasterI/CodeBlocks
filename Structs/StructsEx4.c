#include <stdio.h>


struct alunos{

int matricula;
char nome[255];
int nota1;
int nota2;
int nota3;

};


int main(){


struct alunos alunos[5];
int i;


//A) Entrar com dados dos 5 alunos


for(i = 0; i < 5; i++){

    printf("Matricula aluno[%d]: ", i);
    scanf("%d%*c", &alunos[i].matricula);
	setbuf(stdin, NULL);



    printf("Nome aluno[%d]: ", i);
    scanf(" %s[^\n]%*c", alunos[i].nome);
	setbuf(stdin, NULL);



    printf("Nota1 aluno[%d]: ", i);
    scanf("%d%*c", &alunos[i].nota1);
	setbuf(stdin, NULL);



    printf("Nota2 aluno[%d]: ", i);
    scanf("%d%*c", &alunos[i].nota2);
	setbuf(stdin, NULL);



    printf("Nota3 aluno[%d]: ", i);
    scanf("%d%*c", &alunos[i].nota3);
	setbuf(stdin, NULL);



    printf("\n");

}


//B) Aluno com a maior nota da 1 prova
int maior;

maior = alunos[0].nota1;

for(i = 0; i < 5; i++){

    if(alunos[i].nota1 > maior){

        maior = alunos[i].nota1;
    }
}

printf("\nMaior nota: %d", maior);



//C) Encontre o aluno com a maior media geral











//D) Encontre o aluno com a menor media geral



//E) Diga se o aluno foi aprovado ou reprovado, valor 6 para aprovação













return 0;
}

