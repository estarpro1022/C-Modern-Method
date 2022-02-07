#include <stdio.h>

int main() {
    int day, begin;

    printf("Enter number of days this month:");
    scanf("%d", &day);
    printf("Enter the beginning day of the week(1 = Sun, 7 = Sat):");
    scanf("%d", &begin);

    // print front blank
    for (int i = 1; i < begin; i++) {
        printf("   ");
    }

    // print calendar
    for (int i = 1; i <= day; i++) {
        // remember blank behind digits
        printf("%2d ", i);
        if ((i + begin - 1) % 7 == 0)
            printf("\n");
    }

    return 0;
}

