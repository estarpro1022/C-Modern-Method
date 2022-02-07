#include <stdio.h>
int main() {
    printf("Enter a 24-hour time:");
    int hour, minute;
    scanf_s("%d :%d", &hour, &minute);
    printf("Equivalent 12-hour time: ");
    if (hour < 12 && hour > 0) {
        printf("%d:%.2d AM", hour, minute);
    } else if (hour == 12) {
        printf("%d:%.2d PM", hour, minute);
    } else if (hour > 12) {
        printf("%d:%.2d PM", hour - 12, minute);
    } else {
        printf("12%.2d AM", minute);
    }
    return 0;
}

