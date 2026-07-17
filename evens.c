#include <stdio.h>

int main (){

int num1;

printf("enter till where you need to find even number\n");
scanf("%d", &num1);
for (int i = 1; i <= num1; i++){
 if (i % 2 == 0){
    printf("%d\n", i);
 }

}


}