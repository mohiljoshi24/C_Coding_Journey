#include <stdio.h>
int main (){
    int running = 1;
    while (running) {

printf("|------------------------------------|\n");
printf("| %-34s |\n", "");
printf("| %-34s |\n", "   --- WELCOME TO THE ATM ---    ");
printf("| %-34s |\n", "");
printf("|------------------------------------|\n");
printf("| %-34s |\n", "");
printf("|====================================|\n");
printf("| %-34s |\n", "");
printf("| %-34s |\n", "");
printf("| %-34s |\n", "check balance: 1");
printf("| %-34s |\n", "reset pin: 2");
printf("| %-34s |\n", "renew account: 3");
printf("| %-34s |\n", "withdraw: 4");
printf("| %-34s |\n", "deposit: 5");
printf("| %-34s |\n", "exit: 6");
printf("| %-34s |\n", "");
printf("| %-34s |\n", "");
printf("|====================================|\n");
printf("| %-34s |\n", "");
printf("|------------------------------------|\n");
printf("\n");
printf("\n");
printf("\n");
printf(" enter your choice number: \n");
int choice;
scanf("%d", &choice);

if ( choice == 1 ){
    printf(" your current account balance is: 0\n");

}
else if ( choice == 2){
    printf("enter your account number for verification: \n");

}
else if ( choice == 3){
    printf("enter otp to renew your account\n");
}
else if ( choice == 4 ){
    printf("enter the amount to withdraw\n");
}
else if ( choice == 5 ){
    printf("enter the amount you want to deposit\n");
}
else if ( choice ==  6){
    printf("exited the system\n");
}
else {
    printf(" %d is invalid\n", choice);
}
    }
    return 0;



}