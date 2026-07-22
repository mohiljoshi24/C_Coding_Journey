#include  <stdio.h>

int main(){

int matrix_1 [2][2] = {
    {1,2},
    {3,4}
};

int matrix_2 [2][2] = {
    {5,6},
    {7,8}
};

int sum [2][2];

for (int i = 0; i <= 1; i++){
    for (int j = 0; j <=1; j++){
        sum[i][j] = matrix_1[i][j] + matrix_2[i][j];
    }
}

for (int x = 0; x <= 1; x++){
    for (int y = 0; y < 2; y++){
        printf(" the number at sum [%d,%d] is : %d \t", x, y, sum[x][y]);
    
    }
    printf("\n");
}
}