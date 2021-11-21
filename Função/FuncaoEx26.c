#include <stdio.h>

int somatorio(int N){

int i;
int soma = 0;

	for(i = 1; i <= N; i++){

		soma+=i;

	}

	return soma;
}



int main(){

int N;
scanf("%d", &N);


printf("\n%d", somatorio(N));



return 0;
}

