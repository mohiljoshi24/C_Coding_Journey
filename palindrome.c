#include <stdio.h>
#include <string.h>

int main () {

    char word[50];

    printf("enter a word to reverse\n");
    fgets(word, sizeof(word), stdin);

    word[strcspn(word, "\n")] = '\0';

    int left = 0;
    int right = strlen(word) - 1;
    int is_palindrome = 1;

    while (left < right){
        if (word[left] != word[right]){
            is_palindrome = 0;
            break;
          
        }
            left++;
            right--;

    }
    if (is_palindrome == 1){
        printf(" %s is a palindrome!\n", word);
    }
else {
    printf("%s is not a palindrome!\n", word);
}
}