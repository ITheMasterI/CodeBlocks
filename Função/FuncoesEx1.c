#include <stdio.h>


void devolveDobro(int a){

printf("O dobro de %d eh %d", a, 2 * a);

}




int main(){

int a;


printf("Insira um valor para a: ");
scanf("%d", &a);




devolveDobro(a);




return 0;
}
