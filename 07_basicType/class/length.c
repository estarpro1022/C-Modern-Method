#include <stdio.h>

int main() {
    char ch;
    int len = 0;

    printf("Enter a message:");
    while ((ch = getchar()) != '\n') {
        len++;
    }
    printf("Your message is about %d character%s long.", len, len > 1 ? "s" : "");

    return 0;
}

