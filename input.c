#include <stdio.h>
void getValidatedInput( int inputnum, int min, int max){
while(1){
    printf("enter a number between %d and %d\n", min ,max);
    scanf(" %d", inputnum);
}
    if (inputnum >= min && inputnum <= max){
        printf("the entered number is a valide number");

    }

}
int main(){
int num;
    printf("enter number:\n");
    scanf(" %d", &num);
    getValidatedInput(num , 1 , 100);
}