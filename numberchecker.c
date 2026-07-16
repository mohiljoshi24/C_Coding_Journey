#include <stdio.h>

int main(){

    int num1;

    printf("enter your integer number to check if its positive or negative\n");
scanf("%d", &num1);

 int positive = num1 > 0;
     int negative = num1 < 0;
    int equal = num1 == 0;

if (positive) {
    printf(" this number %d is a positive integer\n", num1);
}

else if (negative){
    printf (" this number %d is a negative integer\n", num1);

}

else if (equal){ 
    printf(" this number %d is zero \n", num1);
}

}