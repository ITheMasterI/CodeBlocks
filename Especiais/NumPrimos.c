#include <stdio.h>
#include <locale.h>


int main(){

setlocale(LC_ALL, "");

int N, i, cont = 0;

scanf("%d", &N);


for(i = 1; i <= N; i++){

	if(N % i == 0){
		cont++;
	}

}


		if(cont == 2){

			printf("%d Ž primo", N);

		}else{

			printf("%d n‹o Ž primo", N);

		}




return 0;
}

