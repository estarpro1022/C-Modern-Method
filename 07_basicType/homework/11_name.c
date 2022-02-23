#include <stdio.h>

int main() {
    char ch, ch1;

    printf("Enter the name:");
    ch1 = getchar();
    while ((ch = getchar()) != ' ')
        ;
    while ((ch = getchar()) != '\n') {
        printf("%c", ch);
    }
    printf(", %c.", ch1);

    return 0;
}

