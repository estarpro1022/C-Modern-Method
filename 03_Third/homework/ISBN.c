//
// Created by estar on 2022/1/30.
//
#include <stdio.h>
int main() {
    int prefix, identification, publisher, number, check;
    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &prefix, &identification, &publisher, &number, &check);
    printf("GS1 prefix: %d\n", prefix);
    printf("Group identifier: %d\n", identification);
    printf("Publisher code: %d\n"
           "Item number: %d\n"
           "Check digit: %d\n", publisher, number, check);
    return 0;
}
/**
 * 不能解决数字中有零的情况
 *
 *
 *
*/