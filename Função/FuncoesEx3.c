#include <stdio.h>


int verifica(int valor){

    if(valor > 0){

        return 1;

    }else if(valor < 0){

        return -1;

    }else{

        return 0;
    }

}




int main(){


int valor;

printf("Insira um valor: ");
scanf("%d", &valor);


printf("%d", verifica(valor));




return 0;
}

