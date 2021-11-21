#include <stdio.h>
#include <math.h>
#include <locale.h>



int main(){

setlocale(LC_ALL, "");

int N, i;
scanf("%d", &N);


float raiz;

raiz = sqrt(N);



	if(pow(raiz, 2) == N){

	printf("%d Ž um quadrado perfeito", N);

	}else{


	printf("%d n‹o Ž um quadrado perfeito", N);

	}



return 0;
}
