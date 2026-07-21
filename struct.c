#include <stdio.h>



int main(){

int array[5] = {10,20,30,40,50};

printf("the first number is (index 0): %d\n", array[0]);
printf("the first number is (index 2): %d\n", array[2]);
printf("\n--- Printing the whole lot using a loop ---\n");


for(int i =0; i <= 4; i++){

    printf("slot %d holds value: %d\n", i , array[i]);

}

}