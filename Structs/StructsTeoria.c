#include <stdio.h>
#include <string.h>


struct palavra{

int ordem;
char letra;
char texto[255];
};



int main() {

	//Criar uma palavra
	struct palavra primeiraPalavra;


	//modificando os campos
	primeiraPalavra.ordem = 10;
	primeiraPalavra.letra = 'p';
	strcpy(primeiraPalavra.texto, "cu");


printf("Ordem: %d , Letra: %c , Texto: %s", primeiraPalavra.ordem, primeiraPalavra.letra, primeiraPalavra.texto);



//Fazendo uma lista de structs


struct palavra listaDePalavras[3];

listaDePalavras[0].ordem = 0;
listaDePalavras[0].letra = 'a';
strcpy(listaDePalavras[0].texto, "buceta");

listaDePalavras[1].ordem = 1;
listaDePalavras[1].letra = 'b';
strcpy(listaDePalavras[1].texto, "buceta2");


listaDePalavras[2].ordem = 2;
listaDePalavras[2].letra = 'c';
strcpy(listaDePalavras[2].texto, "buceta3");



int i;

for(i = 0; i < 3; i++){

 printf("\nOrdem: %d , Letra: %c , Texto: %s", listaDePalavras[i].ordem, listaDePalavras[i].letra, listaDePalavras[i].texto);
}



}
