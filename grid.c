#include <stdio.h> 

int main() {

    int row;
    int column;

    printf("enter number of rows you want\n");
    scanf("%d", &row);

    printf("enter number of column you want\n");
    scanf("%d", &column);

    for ( int i = 1; i <= row; i++){

        for (int x = 1; x <= column; x++){
            printf("*");
        }

        printf("\n");

    }

}