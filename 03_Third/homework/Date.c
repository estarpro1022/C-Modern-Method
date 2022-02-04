//
// Created by estar on 2022/1/30.
//
#include <stdio.h>
int main() {
    int month, day, year;
    printf("Enter a date:");
    scanf("%d/%d/%d", &month, &day, &year);
    printf("The date is %.4d/%.2d/%.2d", year, month, day);
    return 0;
}
