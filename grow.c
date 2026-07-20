#include <stdio.h>

void growNumber(int n){
    if ( n >= 50 ){

printf("the system crashed due to very big number\n");
return;
    }

    printf("n * 2 = %d\n", n);
growNumber(n * 2);
}
int main  (){
    growNumber(1);
    return 0;
}