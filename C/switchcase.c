#include <stdio.h>

int main (){

    char letter;


    printf("Enter a letter from the alphabet: ");
    scanf("%c", &letter);

    switch(letter){
    case 'a': case 'e': case 'i': case 'o': case 'u':
    case 'A': case 'E': case 'I': case 'O': case 'U':
    printf("These are vowels");
    break;

    default:
    printf("These are consonants");
    }

    return 0;
}