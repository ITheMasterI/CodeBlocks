#include <stdio.h>



float converteTemp(int C){

float F;


F = ((C * 9.0) / 5.0) + 32.0;

return F;

}






int main(){


int C;


printf("Insira a temperatura em C: ");
scanf("%d", &C);



printf("F: %.1f", converteTemp(C));



return 0;
}

