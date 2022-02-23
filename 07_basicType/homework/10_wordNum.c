#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    int num = 0;

    printf("Enter a sentence:");

    while ((ch = getchar()) != '\n') {
        ch = tolower(ch);
        switch (ch) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                num++;
                break;
            default:
                break;
        }
    }
    printf("Your sentence contains %d vowels.", num);

    return 0;
}

