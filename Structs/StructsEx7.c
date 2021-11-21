#include <stdio.h>
#include <math.h>


typedef struct Polar{

int r;
int a;

}Polar;



struct Cartesiano{

float x;
float y;
Polar valores;


};



int main(){



struct Cartesiano coordenadas;


    printf("Insira o valor do Raio: ");
    scanf("%d", &coordenadas.valores.r);

    printf("\nInsira o valor do argumento em radianos: ");
    scanf("%d", &coordenadas.valores.a);


    coordenadas.x = coordenadas.valores.r * cos(coordenadas.valores.a);
	coordenadas.y = coordenadas.valores.r * sin(coordenadas.valores.a);

    printf("%f", coordenadas.x);
	printf("\n%f", coordenadas.y);


return 0;
}

