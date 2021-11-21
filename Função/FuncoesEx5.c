#include <stdio.h>
#include <math.h>


float calculaEsfera();




int main(){


int R;

printf("Insira o valor do raio: ");
scanf("%d", &R);



printf("%.2f", calculaEsfera(R));



return 0;
}



float calculaEsfera(int R){

float V;


V = (4 * 3.14 * pow(R, 3)) / 3;

return V;

}

