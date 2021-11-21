#include <stdio.h>



void media(float nota1, float nota2, float nota3, char letra){




    if(letra == 'A'){




 printf("Media aritimetica: %.1f", (nota1 + nota2 + nota3) / 3.0);



    }else if(letra == 'P'){


    printf("Media ponderada: %.1f", ((nota1 * 5.0) + (nota2 * 3.0) + (nota3 * 2.0)) / (5.0 + 3.0 + 2.0));

    }
}





int main(){


float nota1, nota2, nota3;
char letra;


printf("nota 1: ");
scanf("%f", &nota1);



printf("\nnota 2: ");
scanf("%f", &nota2);




printf("\nnota 3: ");
scanf("%f", &nota3);


printf("\nLetra: ");
scanf("%s", &letra);





media(nota1, nota2, nota3, letra);



return 0;
}

