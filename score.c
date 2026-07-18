#include <stdio.h>
void boostMultiplier(int  multiplier){

    multiplier = multiplier * 5;
}
void triggerBonusScore(int* score){
    *score = *score + 500;
}
int main(){
    int score = 100;
    int multiplier = 2;
    
    printf("--- Game starting stats ---\n");
    printf("score: %d, multiplier: %d\n", score, multiplier);
    boostMultiplier(multiplier);
triggerBonusScore(&score);
printf("--- Game ending stats ---\n");
printf("score: %d, multiplier: %d\n", score, multiplier);
}
