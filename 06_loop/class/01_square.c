#include <stdio.h>
int main() {
    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table:");
    int num;
    scanf("%d", &num);
    int i = 1;

    while (i <= num) {
        printf("%10d%10d\n", i, i * i);

        /**
         * %10d to control width
         * num, num * num is wrong
         */
        i++;
        // remember i++
    }

    return 0;
}

