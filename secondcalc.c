#include <stdio.h>
int main() {
    float num1;
    float num2;
    char operation;
    printf("enter your first number\n");
    scanf("%f", &num1);
    printf("enter your second number\n");
    scanf("%f", &num2);
    printf(" enter + to add , - to subtract , * to multiply , / to divide\n");
    scanf(" %c", &operation);
    switch (operation) {
        case '+':
        printf("you choose addition\n the addition of given 2 numbers is %.2f\n", num1 + num2);
        break;

        case '-':
        printf("you choose to subtract\nthe subtraction of given 2 numbers is %.2f\n", num1 - num2);
        break;

        case '*':
        printf("you choose to multiply\n the multiplication of given 2 numbers is %.2f\n", num1 * num2);
        break;

        case '/':
        printf("you choose to divide\n the division of given 2 numbers is %.2f\n", num1 / num2) ;
        break;

        default:
        printf("invalid operation! \n the given operation '%c' is not supported yet \n", operation);
        break;

    }
}