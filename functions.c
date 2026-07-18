#include <stdio.h>


 int addNumber(int a, int b) {
int sum = a + b;
return sum;}
int multiplyNumber(int a, int b){
    int multiple = a * b;
    return multiple;

}



int main(){
        int x;
        int y;
        char choice;
printf("enter value of x\n");
scanf("%d", &x);
printf("enter valuue of y\n");
scanf("%d", &y);
    printf("press + for add,  * for multiple\n");
    scanf(" %c", &choice);
      int  sum = addNumber(x, y);
    int multiple = multiplyNumber(x ,y);
    
    if (choice == '+'){printf("the sum is: %d\n",sum );
    
    }
 else {printf("the multiple is: %d\n", multiple);
}
}
