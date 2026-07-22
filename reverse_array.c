#include <stdio.h>
int main (){


    int array[5] = {10,20,30,40,50};
    int start = 0;
    int end = 4;

    for (int i = 0; i <= 4; i++ ){
        printf("the current array is: %d\n", array[i]);
    }
    while(start < end){
        int temp = array[start];
        array[start] = array[end];
        array[end] = temp;

        start++;
        end--;
    }
    for(int i =  0; i <= 4; i++){
        printf("new reverse array is: %d\n", array[i]);
    }

}