#include <stdio.h>
int main() {
    int num1;
    int found = 0;
int array[2][5] = {
    {10,20,30,40,50},
    {60,70,80,90,100}
};
printf("enter a number from 10 - 100 to see if you guessed one of the existing number\n");
scanf("%d", &num1);

for (int i = 0; i < 2; i++){
    for (int j = 0; j < 5; j++){

        if (num1 == array[i][j]){
            printf("you guessed a right number\n the number was found in row: %d and column: %d", i,j);
            found = 1;
            break;
        }
    } 
    if  (found == 1){
        break;
    }
    
}
if (found== 0){
    printf("BAD LUCK!\n you guessed the wrong number"); 
}
return 0;
} 