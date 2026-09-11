#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    if (!isalpha(ch)) {
        printf("Error: Please enter a letter.\n");
    }
    else {
        ch = tolower(ch);

        switch (ch) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                printf("Is a Vowel\n");
                break;

            default:
                printf("Is a Consonant\n");
        }
    }

    return 0;
}
