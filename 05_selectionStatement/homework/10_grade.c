#include <stdio.h>

int main() {
    int grade;
    printf("Enter numerical grade:");   // 数值的
    scanf("%d", &grade);
    int a = grade / 10;
    /**
     * judge by first number, so that switch-case can be used.
     *
     */
    char b;
    switch (a) {
        case 10:
        case 9:
            b = 'A';
            break;
        case 8:
            b = 'B';
            break;
        case 7:
            b = 'C';
            break;
        case 6:
            b = 'D';
            break;
        default:
            b = 'F';
            break;
    }
    printf("Letter grade: %c", b);
    return 0;
}

