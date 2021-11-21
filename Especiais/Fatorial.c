#include <stdio.h>
#include <locale.h>

int main(){

setlocale(LC_ALL, "");


int N;
scanf("%d", &N);


int fat;

for(fat = 1; N > 1; N--){


fat = fat * N;

}



printf("%d", fat);






return 0;
}

