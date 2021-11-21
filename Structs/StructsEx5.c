#include <stdio.h>


struct Vetor{

float x;
float y;
float z;

};



int main(){



struct Vetor vetor[2];
int i;

for(i = 0; i < 2; i++){

    printf("vetorX[%d]: ", i);
    scanf("%f%*c", &vetor[i].x);


    printf("vetorY[%d]: ", i);
    scanf("%f%*c", &vetor[i].y);

    printf("vetorZ[%d]: ", i);
    scanf("%f%*c", &vetor[i].z);

    printf("\n");
}


struct Vetor somaVetorial;


somaVetorial.x = vetor[0].x + vetor[1].x;
somaVetorial.y = vetor[0].y + vetor[1].y;
somaVetorial.z = vetor[0].z + vetor[1].z;


printf("S = (%.1f, %.1f, %.1f)", somaVetorial.x, somaVetorial.y, somaVetorial.z);


return 0;
}

