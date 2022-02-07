// easy
#include <stdio.h>

int main() {
    int n;

    printf("Enter an integer:");
    scanf("%d", &n);

    for (int i = 2; i <= n; i += 2) {
        printf("%d\n", i * i);
    }

    return 0;
}

