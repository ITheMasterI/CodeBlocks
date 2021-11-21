#include <stdio.h>



void exponente(int X, int Z){

int M = 1;
int Z2 = 1;




while(Z2 <= Z){

M = M * X;
Z2++;

}

printf("M: %d", M);

}





int main(){


int X, Z;

printf("X: ");
scanf("%d", &X);



printf("Z: ");
scanf("%d", &Z);



exponente(X, Z);




return 0;
}

