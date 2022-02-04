// 两个分数相加
// Created by estar on 2022/1/29.
//
#include <stdio.h>
int main() {
    int num1, num2;
    int number1, number2;
    printf("Enter two fractions:");
    scanf("%d / %d %d / %d", &num1, &num2, &number1, &number2);
    int dividend = num1 * number2 + num2 * number1;
    int divisor = num2 * number2;
    int min = (dividend < divisor) ? dividend : divisor;
//    printf("%d\n", min);
    int son = 1;
    for (int i = 2; i <= min; i++) {
        if ((dividend % i == 0) && (divisor % i == 0)) {
            // 是取模不是除
            // i 是其中一个公因数
            son = i;
        }
    }
    printf("sum is %d/%d\n", dividend / son, divisor / son);
    return 0;
}
