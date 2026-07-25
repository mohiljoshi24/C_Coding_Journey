#include <stdio.h>
#include <string.h>

int main (){
    char string[30];
printf("enter your full name\n");
fgets(string,sizeof(string), stdin);

printf("hello, %s", string);

printf("length of name: %lu\n", strlen(string));
printf("buffer size: %lu\n", sizeof(string));

return 0;
}