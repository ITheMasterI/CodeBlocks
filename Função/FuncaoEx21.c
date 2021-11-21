#include <stdio.h>

void qntdPrimos(int N){

int i, cont = 0;
int valor = 2;

for(i = 1; i < N; i++){

    if(valor % i == 0){

        cont++;
        i++;
    }
}

if(cont == 2){

    printf("Possui %d primos abaixo de %d", valor, N);
}

}





int main(){


int N;
scanf("%d", &N);




qntdPrimos(N);


return 0;
}

