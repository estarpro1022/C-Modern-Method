#include <stdio.h>

int main() {
    int num = 0, sum = 0;

    printf("This program sums a series of integers.\n");
    printf("Enter integers (0 to terminate):");

    scanf("%d", &num);
    /*while (num != 0) {
        sum += num;
        scanf("%d", &num);
        *//**
         * 注意sum和scanf的顺序，这样更合理，并且在while前就读取数字
         *//*
    }*/
    do {
        sum += num;
        scanf("%d", &num);
    } while (num != 0);

    printf("The sum is: %d", sum);

    return 0;
}

