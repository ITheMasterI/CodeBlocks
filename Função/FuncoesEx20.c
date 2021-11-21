#include <stdio.h>


int fatorial(int n){


int fat;

for(fat = 1; n > 1; n--){


    fat = fat * n;

}

return fat;


}





int main(){

int n;
scanf("%d", &n);




printf("%d! = %d", n, fatorial(n));




return 0;
}

