#include <stdio.h>

void swapValues(int* x, int* y){
int temp;
temp = *x;
*x = *y;
*y = temp;
}

int main () {
    int a = 10;
    int b = 20;
    printf("Before swap: a =%d, b = %d\n", a,b);
    swapValues(&a, &b);
    printf("after swap: a =%d, b =%d\n", a,b);
}