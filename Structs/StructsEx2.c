#include <stdio.h>



struct pessoa{

char nome[255];
char endereco[255];
int idade;

};





int main(){



struct pessoa p;

printf("Nome: ");
scanf(" %[^\n]%*c",p.nome);

printf("\nEndereco: ");
scanf(" %[^\n]%*c",p.endereco);

printf("\nIdade: ");
scanf("%d", &p.idade);



printf("\nNome: %s \nEndereco: %s \nIdade: %d", p.nome, p.endereco, p.idade);



return 0;
}

