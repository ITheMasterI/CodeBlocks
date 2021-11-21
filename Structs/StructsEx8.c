#include <stdio.h>
#include <locale.h>


struct Funcionario{

char nome[255];
int idade;
char sexo;
char cpf[15];
char dataNascimento[10];
int codSetor;
char cargo[30];
float salario;
};




int main(){

setlocale(LC_ALL, "");


struct Funcionario dados;

printf("Insira as informações do funcionário abaixo: ");

    printf("\nNome: ");
    scanf("%s[^\n]%*c", dados.nome);


    printf("Idade: ");
    scanf("%d%*c", &dados.idade);


    printf("Sexo (M ou F): ");
    scanf("%s[^\n]%*c", &dados.sexo);


    printf("CPF: ");
    scanf("%s[^\n]%*c", dados.cpf);

    printf("Data de Nascimento: ");
    scanf("%s[^\n]%*c", dados.dataNascimento);


    printf("Código do setor (0 - 99): ");
    scanf("%d%*c", &dados.codSetor);

	if(dados.codSetor < 0 || dados.codSetor > 99){

		do{

		printf("Erro. Insira o código do setor novamente (0 - 99): ");
	    scanf("%d%*c", &dados.codSetor);

		}while(dados.codSetor < 0 || dados.codSetor > 99);
	}



    printf("Cargo: ");
    scanf("%s[^\n]%*c", dados.cargo);


    printf("Salário: ");
    scanf("%f%*c", &dados.salario);



	printf("\n\n");

printf("\nNome: %s", dados.nome);
printf("\nIdade: %d", dados.idade);
printf("\nSexo: %c", dados.sexo);
printf("\nCPF: %s", dados.cpf);
printf("\nData de Nascimento: %s", dados.dataNascimento);
printf("\nCódigo do Setor: %d", dados.codSetor);
printf("\nCargo: %s", dados.cargo);
printf("\nSalário: %.2f", dados.salario);



return 0;
}

