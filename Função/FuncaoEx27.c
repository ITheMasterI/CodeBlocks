#include <stdio.h>
#include <math.h>




int fatorial(int n){

int fat = 1, i;

	for(i = 1; i <= n; i++){
		fat *=i;
	}

	return fat;

}








void seno(int x, int n){

float seno = 0;

    for(n = 0; n <= 5; n++){

    seno += produto(2*n+1) / fatorial(2*n + 1);

    }

	printf("\nSin %d = %f", x, seno);
}



int main(){

int x;

printf("Insira o valor do angulo: ");
scanf("%d", &x);



int n;
printf("Insira a variancia de 0-5: ");
scanf("%d", &n);

while(n < 0 || n > 5){

printf("Erro! Insira a variancia de 0-5: ");
scanf("%d", &n);

}


seno(x, n);



return 0;
}

