#include <stdio.h>
#include <math.h>


void calculaHipotenusa(int a, int b){


float hipotenusa;


hipotenusa = sqrt(pow(a, 2) + pow(b, 2));


printf("Hipotenusa: %.1f", hipotenusa);

}





int main(){


int a, b;


printf("Insira o valor do cateto a: ");
scanf("%d", &a);


printf("\nInsira o valor do cateto b: ");
scanf("%d", &b);




calculaHipotenusa(a, b);







return 0;
}

