#include <stdio.h>
#include <math.h>
#include <locale.h>

void quadradoPerfeito();


int main(){

setlocale(LC_ALL, "");


int N;

printf("Insira um valor: ");
scanf("%d", &N);



quadradoPerfeito(N);




return 0;
}





void quadradoPerfeito(int N){


float raiz;

raiz = sqrt(N);


if(pow(raiz, 2) == N){


    printf("%d Ž um quadrado perfeito", N);

}else{

printf("%d n‹o Ž um quadrado perfeito", N);

}




}


