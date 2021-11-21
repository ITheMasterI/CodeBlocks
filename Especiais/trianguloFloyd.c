#include <stdio.h>
#include <math.h>
#include <locale.h>



int main(){

setlocale(LC_ALL, "");


int i, j, N;
int acumulador = 1, m = 1;

scanf("%d", &N);

printf("\n");

for(i = 0; i < N; i++){

	for(j = 0; j < m; j++){

		printf(" %d", acumulador);
		acumulador++;

	}

	m++;
	printf("\n");

}






return 0;
}





