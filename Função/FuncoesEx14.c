#include <stdio.h>


void consumo(float distancia, float litros){


float consumo = distancia / litros;


if(consumo < 8){


printf("Venda o carro!");



}else if(consumo >= 8 && consumo <= 14){


printf("Economico!");


}else if(consumo > 12){


printf("Super economico!");

}



}





int main(){


float distancia, litros;


printf("Qual foi a distancia percorrida? ");
scanf("%f", &distancia);


printf("Quantos litros foram consumidos? ");
scanf("%f", &litros);




consumo(distancia, litros);





return 0;
}

