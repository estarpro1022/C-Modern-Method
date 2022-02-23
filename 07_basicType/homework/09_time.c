#include <stdio.h>
#include <ctype.h>

int main() {
    int hour, minute;
    char ch;

    printf("Enter a 12-hour time:");
    scanf("%d :%d", &hour, &minute);
    printf("Equivalent 24-hour time: ");

    while ((ch = getchar()) != '\n') {
        ch = tolower(ch);
        if (ch == 'a') {
            printf("%d:%d", (hour == 12) ? 0 : hour, minute);
        } else if (ch == 'p') {
            printf("%d:%d", (hour == 12) ? 12 : (hour + 12), minute);
        }
    }


}

