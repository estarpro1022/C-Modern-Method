#include <stdio.h>
int main() {
    int a, b, c, d;
    printf("Enter four integers:");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int max, min;
    max = min = a;
    if (a > b) {
        max = a;
        min = b;
    } else {
        max = b;
        min = a;
    }
    if (max < c) {
        max = c;
    }
    if (min > c) {
        min = c;
    }
    if (max < d) {
        max = d;
    }
    if (min > d) {
        min = d;
    }
    printf("Largest number: %d\n", max);
    printf("Smallest number: %d\n", min);
    return 0;
}

