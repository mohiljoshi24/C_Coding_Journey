#include <stdio.h>
#include <string.h>

int main(){
char str1[] = "mohil";
char str2[30];

printf("enter the password\n");
fgets(str2, sizeof(str2), stdin);

str2[strcspn(str2, "\n")] = '\0';


    int result = strcmp(str1, str2);

    if (strcmp(str2, "mohil") == 0){
        printf("correct password\n");
    }
else {
    printf("wrong password!\n");
}


}