#include <stdio.h>
int main (){
    int num1;
    printf("enter thhe year to check if its a leap year or not\n");
    scanf("%d", &num1);
    int leap = num1 % 400 == 0 || num1 % 4 == 0 && num1 % 100 != 0;
if (leap){
    printf("this year %d is leap year\n", num1);
}
else {                                           
    printf("this year %d is not a leap year\n", num1);
}
}