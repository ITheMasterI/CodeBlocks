#include <stdio.h>
#include <math.h>
#include <locale.h>



int main(){

setlocale(LC_ALL, "");

int N, i;
scanf("%d", &N);


printf("D<%d>:", N);

int aux = 0;

	for(i = 1; i <= N; i++){

		if(N % i == 0){

			printf(" %d", i);
			aux++;

		}
	}

return 0;
}
