#include <stdio.h>



void triangulo(int n){


int altura = (2 * n) - 1;

int i, j;



//crescente
for(i = altura; i >= 0; i--){
    for(j = i + 1; j <= n; j++){


        printf("*");

    }
    printf("\n");
}




//decrescente

for(i = 0; i < altura; i++){
    for(j = i + 1; j < n; j++){


        printf("*");

    }
    printf("\n");
}







}








int main(){


int n;
scanf("%d", &n);




triangulo(n);



return 0;
}

