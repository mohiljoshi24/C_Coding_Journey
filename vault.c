#include <stdio.h>

void upgradeSecurity (int *level, int *boostValue){
    *boostValue = (*boostValue) - (*level);
    *level = (*level) + (*boostValue);
    
}

int main(){
   int vault_security_level;
   int boost_level;
   printf("enter the current level of security\n");
   scanf("%d", &vault_security_level);
   printf("enter the desired number of security\n");
   scanf("%d", &boost_level);
    printf("before upgrading security: %d\n", vault_security_level);
    upgradeSecurity(&vault_security_level, &boost_level);
   printf(" after upgrading security: %d\n", vault_security_level);
}