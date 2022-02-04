// 计算通用产品代码的校验位
// Created by estar on 2022/1/30.
//
#include <stdio.h>
int main() {
    int d;
    int i1, i2, i3, i4, i5;
    int j1, j2, j3, j4, j5;
    int check_digit;
    printf("Enter the first digit:");
    scanf("%d", &d);
    printf("Enter first group of digits:");
    scanf("%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5);
    printf("Enter second group of digits:");
    scanf("%1d%1d%1d%1d%1d", &j1, &j2, &j3, &j4, &j5);
    int first_sum = (i2 + i4 + j1 + j3 + j5) * 3;
    int second_sum = i1 + i3 + i5 + j2 + j4;
    int left = (first_sum + second_sum - 1) % 10;
    printf("Check digit: %d", 9 - left);
    return 0;
}
