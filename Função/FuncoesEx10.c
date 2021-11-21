#include <stdio.h>



float retornaMaior(float valor1, float valor2){


if(valor1 > valor2){

    return valor1;

}else{

return valor2;

}




}






int main(){

float valor1, valor2;


printf("Valor 1: ");
scanf("%f", &valor1);



printf("\nValor 2: ");
scanf("%f", &valor2);




printf("Maior valor: %.1f", retornaMaior(valor1, valor2));


return 0;
}

