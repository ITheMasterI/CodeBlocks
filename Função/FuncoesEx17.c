#include <stdio.h>
#include <locale.h>


int soma(int valor1, int valor2){

int maior, menor;


	if(valor1 > valor2){

		maior = valor1;
		menor = valor2;

	}else{

		maior = valor2;
		menor = valor1;
	}


int somaMenor = menor + 1;
int soma = 0;


 while(somaMenor < maior){



soma = soma + somaMenor;
 somaMenor++;



	}

return soma;

}








int main(){


setlocale(LC_ALL, "");

int valor1, valor2;


printf("valor 1: " );
scanf("%d", &valor1);


printf("valor 2: " );
scanf("%d", &valor2);




printf("\nSoma: %d", soma(valor1, valor2));




return 0;
}
