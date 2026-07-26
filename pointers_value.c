#include <stdio.h>

int main (){

    int val;
    int *ptr = &val;

    printf("enter a value from 1-100\n");
    scanf(" %d", &val);

    printf(" your entered value is: %d\n", val);
    printf("the declared value of pointer before updating it: %d\n", *ptr);

    *ptr = *ptr * 2;

    printf("your given value multiplied by 2 is: %d\n", *ptr);

}