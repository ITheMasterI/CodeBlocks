#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int retornaInteiro();
float retornaQuebrado();
char retornaChar();
bool retornaBool();


void limpaTela(){

	system("clear");

}



void desenhaBorda(){ // void = vazio, sem retorno


printf("\n---------------");


}




int main(){


desenhaBorda();

printf("\nhi");
limpaTela();
desenhaBorda();



//retorna um inteiro


int a = retornaInteiro();

printf("\n%d", a);
desenhaBorda();
//limpaTela();

//retorna um quebrado

float b = retornaQuebrado();

printf("\n%.1f", b);
desenhaBorda();
//limpaTela();

//retorna um char


char x = retornaChar();

printf("\n%c", x);
desenhaBorda();
//limpaTela();




//retorna um bool

bool booleano = retornaBool();

	if(booleano){ //true

		printf("\ntrue");

	}else{

		printf("\nfalse");

	}



return 0;
}



int retornaInteiro(){

return 10;

}



float retornaQuebrado(){

return 5.5;

}



char retornaChar(){

return 'x';
//return 100; ir‡ retornar uma letra correspondente ao numero

}



bool retornaBool(){

return false;

}

