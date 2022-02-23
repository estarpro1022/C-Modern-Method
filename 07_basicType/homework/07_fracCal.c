// 两个分数相加
// Created by estar on 2022/1/29.
//
#include <stdio.h>

int main() {
    int num1, num2;
    int number1, number2;
    char ch;

    printf("Example: 1/2 + 3/4\n");
    printf("Enter two fractions:");
    scanf("%d / %d %c %d / %d", &num1, &num2, &ch, &number1, &number2);
    if (ch == '+') {
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
        printf("%d/%d + %d/%d = %d/%d\n", num1, num2, number1, number2, dividend / son, divisor / son);
    } else if (ch == '-') {
        int dividend = num1 * number2 - num2 * number1;
        int divisor = num2 * number2;

        int min;
        int son = 1;
        int is_minus = 0;

        if (dividend < 0) {
            dividend = -dividend;
            is_minus = 1;
        }
        min = (dividend < divisor) ? dividend : divisor;
        for (int i = 2; i <= min; i++) {
            if ((dividend % i == 0) && (divisor % i == 0)) {
                // 是取模不是除
                // i 是其中一个公因数
                son = i;
            }
        }
        printf("%d/%d - %d/%d = %s%d/%d\n", num1, num2, number1, number2,
               (is_minus == 1) ? "-" : "", dividend / son, divisor / son);
    } else if (ch == '*') {
        int dividend = num1 * number1;
        int divisor = num2 * number2;
        int dividend1 = dividend;
        int divisor1 = divisor;
        int dividend_t;

        while (divisor1 != 0) {
            dividend_t = dividend1;
            dividend1 = divisor1;
            divisor1 = dividend_t % divisor1;
        }

        printf("%d/%d * %d/%d = %d/%d", num1, num2, number1, number2,
               dividend / dividend1, divisor / dividend1);
    } else if (ch == '/') {
        int dividend = num1 * number2;
        int divisor = num2 * number1;
        int dividend1 = dividend;
        int divisor1 = divisor;
        int dividend_t;

        while (divisor1 != 0) {
            dividend_t = dividend1;
            dividend1 = divisor1;
            divisor1 = dividend_t % divisor1;
        }

        printf("%d/%d * %d/%d = %d/%d", num1, num2, number1, number2,
               dividend / dividend1, divisor / dividend1);
    }

    return 0;
}


