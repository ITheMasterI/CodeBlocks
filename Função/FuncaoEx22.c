#include <stdio.h>


void linhas(int n){

int i, j, m;
int ac = 1;

	for(i = 0; i <= n; i++){
		for(j = 0; j < i; j++){

			printf("!");


		}

		m++;
		printf("\n");
	}
}





int main() {

 int n;
 scanf("%d", &n);


    linhas(n);



    return 0;
}
