#include <stdio.h>
#include <stdlib.h>


int main(){


char palavra[10];


printf("Digite uma palavra: ");




//limpa o buffer
setbuf(stdin, 0);



//l� a string

fgets(palavra, 10, stdin);


//limpa as casas n�o utilizadas... strlen = comprimento

palavra[strlen(palavra)-1] = '\0'


/*

O caractere "\0"(null) serve para identificar o fim de uma string,
sem o "\0" o C n�o consegue definir o tamanho de uma string quando estamos fazendo um loop
em uma string (que na verdade � um array de chars).

*/




//imprime na tela

printf("%s ", palavra);


//Imprimindo o comprimento da palavra

printf("%lu ", strlen(palavra));


return 0;
}


// Fazendo em C++;


#include <iostream>
#include <string>


using namespace std;

int main(){

setlocale(LC_ALL, "");


//definindo a string;
string palavra;


//Imprimindo na tela
cout << "Digite uma palavra: ";



//lendo a string
cin >> palavra;


//Imprimindo a vari�vel

cout << "\nA palavra eh: " << palavra;




return 0;
}



