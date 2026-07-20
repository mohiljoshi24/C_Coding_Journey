#include <stdio.h>

int main () {
    int choice;
    int running = 1; // Controls whether our ATM stays alive

    while (running) {
        // --- YOUR MENU INTERFACE BLOCK ---
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
        printf("\n\n\n");
        
        printf("enter your choice number: \n");
        scanf("%d", &choice);

        // --- YOUR CORE WORKING LOGIC ---
        if ( choice == 1 ){
            printf("\nyour current account balance is: 0\n");
        }
        else if ( choice == 2 ){
            printf("\nenter your account number for verification: \n");
        }
        else if ( choice == 3 ){
            printf("\nenter otp to renew your account\n");
        }
        else if ( choice == 4 ){
            printf("\nenter the amount to withdraw\n");
        }
        else if ( choice == 5 ){
            printf("\nenter the amount you want to deposit\n");
        }
        else if ( choice == 6 ){
            printf("\nexited the system. Goodbye!\n");
            running = 0; // Breaks the loop cleanly
        }
        else {
            printf("\nInvalid selection! Please pick a number between 1 and 6.\n");
        }

        // --- THE PAUSE SYSTEM ---
        // This keeps the screen from instantly wiping out your output
        if (running == 1) {
            printf("\nPress Enter to return to the main menu...");
            getchar(); // Clears the leftover newline from scanf
            getchar(); // Waits for your physical Enter key press
            printf("\n"); 
        }
    }

    return 0;
}