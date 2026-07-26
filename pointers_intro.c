#include <stdio.h>

int main(){

    int score;
    char grade;

    printf("enter your score and grade\n");
    scanf(" %d", &score);
    scanf(" %c", &grade);
     printf("your score is: %d, and your garde is: %c\n", score, grade);
    printf("the memory address for score is: %p, the memory address for garde is: %p\n", &score, &grade);


}