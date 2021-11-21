#include <stdio.h>



void dataAtual(int dia, int mes, int ano){


if(mes == 1){

    printf("%d de janeiro de %d", dia, ano);

}else if(mes == 2){

    printf("%d de fevereiro de %d", dia, ano);

}else if(mes == 3){

    printf("%d de marco de %d", dia, ano);

}else if(mes == 4){

    printf("%d de abril de %d", dia, ano);

}else if(mes == 5){

    printf("%d de maio de %d", dia, ano);

}else if(mes == 6){

    printf("%d de junho de %d", dia, ano);

}else if(mes == 7){

    printf("%d de julho de %d", dia, ano);

}else if(mes == 8){

    printf("%d de agosto de %d", dia, ano);

}else if(mes == 9){

    printf("%d de setembro de %d", dia, ano);

}else if(mes == 10){

    printf("%d de outubro de %d", dia, ano);

}else if(mes == 11){

    printf("%d de novembro de %d", dia, ano);

}else if(mes == 12){

    printf("%d de dezembro de %d", dia, ano);

}





}



int main(){


int dia, mes, ano;

printf("Insira o dia: ");
scanf("%d", &dia);

printf("Insira o mes: ");
scanf("%d", &mes);

printf("Insira o ano: ");
scanf("%d", &ano);



dataAtual(dia, mes, ano);



return 0;
}

