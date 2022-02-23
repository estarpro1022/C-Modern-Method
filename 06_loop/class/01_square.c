#include <stdio.h>
int main() {
    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table:");
    int num;
    scanf("%d", &num);
    int i = 1;
    getchar();
//    while (i <= num) {
//        printf("%10d%10d\n", i, i * i);
//
//        /**
//         * %10d to control width
//         * num, num * num is wrong
//         */
//        i++;
//        // remember i++
//    }
    for (i = 1; i <= num; i++) {
        printf("%10d%10d\n", i, i * i);
        if (i % 24 == 0) {
            printf("Press Enter to continue...");
            while (getchar() != '\n')
                ;

        }
    }

    return 0;
}

