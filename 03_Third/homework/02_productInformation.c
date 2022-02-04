//
// Created by estar on 2022/1/30.
//
#include <stdio.h>
int main() {
    int number;
    float price;
    int month, day, year;
    printf("Enter item number:");
    scanf("%d", &number);
    printf("Enter unit price:");
    scanf("%f", &price);
    printf("Enter purchase date (mm/dd/yyyy):");
    scanf("%d/%d/%d", &month, &day, &year);
    printf("\n");
    printf("Item\t\tUnit\t\tPurchase\n");
    printf("\t\tPrice\t\tDate\n");
    printf("%d\t\t$%7.2f\t%.2d/%.2d/%.4d", number, price, month, day, year);
    return 0;
}
