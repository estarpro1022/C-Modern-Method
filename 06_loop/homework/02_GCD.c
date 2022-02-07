#include <stdio.h>

int main() {
    int a, b;
    int t;

    printf("Enter two numbers:");
    scanf("%d %d", &a, &b);

    while (b > 0) {
        t = a;
        a = b;
        b = t % b;
    }
    printf("Greatest common divisor: %d", a);

    return 0;
}

