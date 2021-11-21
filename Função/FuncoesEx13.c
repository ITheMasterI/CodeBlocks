#include <stdio.h>


void operacao(float valor1, float valor2, char operador){


float operacoes;

	if(operador == '+'){


	printf("%.1f", valor1 + valor2);

	}else if(operador == '-'){

	printf("%.1f", valor1 - valor2);


	}else if(operador == '*'){


	printf("%.1f", valor1 * valor2);

	}else if(operador == '/'){


	printf("%.1f", valor1 / valor2);

	}




}


int main(){


float valor1, valor2;
char operador;


printf("Digite o valor 1: ");
scanf("%f", &valor1);

printf("Digite o valor 2: ");
scanf("%f", &valor2);

printf("Digite o operador: ");
scanf("%s", &operador);



operacao(valor1, valor2, operador);




return 0;
}

