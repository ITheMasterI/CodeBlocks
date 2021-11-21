#include <stdio.h>
#include <math.h>


float calculaVolume(float altura, float raio){


float V;

V = 3.141592 * pow(raio, 2) * altura;

return V;

}






int main(){


float altura, raio;

printf("Insira o valor da altura: ");
scanf("%f", &altura);


printf("\nInsira o valor do raio: ");
scanf("%f", &raio);





printf("Volume: %.2f", calculaVolume(altura, raio));




return 0;
}

