#include <stdio.h>
int recursiveSummation(int n){
    if ( n == 1){
        return 1;
    }
    return n + recursiveSummation(n - 1);
}
int main(){
    int num;
    printf("enter the number to do its recursive summation: \n");
    scanf("%d", &num);
    int result = recursiveSummation(num);
    printf("the total summation is: %d\n", result);
    return 0;
}
