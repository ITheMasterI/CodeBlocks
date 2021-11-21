#include <stdio.h>



void existencia(int a, int b, int c){


if(a + b > c && a + c > b && b + c > a){


  if(a == b && a == b && b == c){

    printf("Triangulo equilatero");


  }else if(a == b || a == b || b == c){

   printf("Triangulo isosceles");


  }else{

   printf("Triangulo escaleno");

  }




}else{


printf("Triangulo inexistente!!");

}




}





int main(){


int a, b, c;


printf("Insira o valor a: ");
scanf("%d", &a);


printf("Insira o valor b: ");
scanf("%d", &b);


printf("Insira o valor c: ");
scanf("%d", &c);


existencia(a, b, c);


return 0;
}

