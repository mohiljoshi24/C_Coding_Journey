#include <stdio.h>
int main () {
    float num1;
    float num2;
    char choice;
    printf("enter first number\n");
    scanf("%f", &num1);
    printf("enter second number\n");
    scanf("%f", &num2);
    printf("type + for addition and - for substraction\n");
    scanf(" %c", &choice);
    if (choice == '*'){
        printf("result: %.2f\n", num1 * num2);
    }
    else if (choice == '/'){
        printf("result: %.2f\n", num1 / num2);    }
}