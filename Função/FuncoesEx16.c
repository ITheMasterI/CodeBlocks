#include <stdio.h>
#include <locale.h>



void desenhaLinha(int N){


	int i;

	for(i = 0; i < N; i++){


		printf("=");


	}

}






int main(){


setlocale(LC_ALL, "");

int N;

printf("Quantos sinais ser‹o mostrados? ");
scanf("%d", &N);



desenhaLinha(N);





return 0;
}
