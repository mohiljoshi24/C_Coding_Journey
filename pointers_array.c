#include <stdio.h>

int main (){

int array[5] = {10,20,30,40,50};
int *ptr = array;

printf(" the first element in the array: %d\n", *ptr);
printf(" the first element's address in memory: %p\n", ptr);


ptr++;
printf(" the second element in the array: %d\n", *ptr);
printf(" the second element's address in memory: %p\n", ptr);


ptr++;
printf(" the third element in the array: %d\n", *ptr);
printf(" the third element's address in memory: %p\n", ptr);


ptr++;
printf(" the fourth element in the array: %d\n", *ptr);
printf(" the fourth element's address in memory: %p\n", ptr);


ptr++;
printf(" the fifth element in the array: %d\n", *ptr);
printf(" the fifth element's address in memory: %p\n", ptr);









}