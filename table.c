#include <stdio.h>

int main() {

    int limit = 10;
    int num1;
  
    printf(" give the number to make its table\n");
    scanf("%d", &num1);


    for (int i = 1; i <= limit; i++){
        printf(" %d * %d = %d\n", num1, i,num1 * i );
    ;}

}