#include <stdio.h>
#include <stdbool.h>

bool isVowel(char c) {
    return c == 'a' || c == 'A' ||
           c == 'e' || c == 'E' ||
           c == 'i' || c == 'I' ||
           c == 'o' || c == 'O' ||
           c == 'u' || c == 'U';
}

bool isLetter(char c) {
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}

int main(){
    char letter;

    printf("\nEnter a character: ");
    scanf("%c", &letter);

    printf("Result: ");
    if(!isLetter(letter)) {
        printf("Invalid input. Not a letter.\n");
    } else if(isVowel(letter)) {
        printf("It is a VOWEL.\n");
    } else {
        printf("It is a CONSONANT.\n");
    }
    printf("\n");
    return 0;

}
