#include <stdio.h>



void mostraSucessor(int numero){


printf("O sucessor de %d eh %d", numero, numero + 1);

}




int main(){


int a;


printf("Insira um valor para a: ");
scanf("%d", &a);



mostraSucessor(a);



return 0;
}





//------------------------------------------------------------------------------------------------------------








void retornaSoma(int numero1, int numero2){


	printf("A soma entre %d e %d eh %d", numero1, numero2, numero1 + numero2);

}





int retornaSoma2(int numero1, int numero2){

return numero1 + numero2;

}









int main(){


int a, b;


scanf("%d", &a);
scanf("%d", &b);

//Primeira funcao
retornaSoma(a, b);


//Segunda Funcao
printf("\nA soma entre %d e %d eh %d", a, b, retornaSoma2(a,b));

return 0;
}







