#include <stdio.h>

int main() {
    float max;
    printf("Enter a number:");
    scanf("%f", &max);
    float num;

    while (1) {
        printf("Enter a number:");
        scanf("%f", &num);
        if (max < num) {
            max = num;
        }
        if (num <= 0) {
            printf("The largest number is %f", max);
            break;
        }
    }
    return 0;
}

