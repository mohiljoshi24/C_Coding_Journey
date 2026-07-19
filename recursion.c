#include <stdio.h>
void countDown(int n){
    if (n == 5){
        printf("Boom!! The Bomb Blasted\n");

        return;
    }
    printf(" tick tick  ...%d\n", n);

    countDown(n + 1);
}
int main() {
    countDown(1);
    return 0;

}
