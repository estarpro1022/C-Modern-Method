#include <stdio.h>

int main() {
    int n;
    int mul = 1;
    float sum = 0.0f;


    printf("This program is meant to calculate e.\n");
    printf("Enter a digit:");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        /* mul = 1 */
        mul = 1;
        for (int j = 2; j <= i; j++) {
            mul *= j;
        }
        sum += 1.0 / mul;
    }

    printf("%f\n", sum + 1);

    return 0;
}

