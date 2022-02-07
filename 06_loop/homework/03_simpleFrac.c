#include <stdio.h>

int main() {
    int dividend, divisor;
    int sub;

    printf("Enter a fraction(a/b):");
    scanf("%d /%d", &dividend, &divisor);

    int dividend1 = dividend, divisor1 = divisor;

    // cal GCD
    while (divisor1 > 0) {
        sub = dividend1;
        dividend1 = divisor1;
        divisor1 = sub % divisor1;
    }

    printf("Simplest fraction is %d/%d", dividend / dividend1, divisor / dividend1);

    return 0;
}

