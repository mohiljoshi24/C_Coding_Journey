#include <stdio.h>
int main (){
    float inr;
    printf("enter amount in inr\n");
    scanf("%f", &inr);
    float exchange = inr / 96.85;
    printf("this equals to %.2f dollars\n", exchange);

}