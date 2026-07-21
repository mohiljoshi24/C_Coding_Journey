#include <stdio.h>

int main(){
    int array[5] = {10,30,50,70,90};

    int max = array[0];

    for (int i = 0; i <= 4; i++){
        if (array[i] > max ){
            max = array[i];
        }
    }
printf("the max number rightnow in the current set of number is: %d\n", max);




}