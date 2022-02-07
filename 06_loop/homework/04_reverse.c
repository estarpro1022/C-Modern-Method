#include <stdio.h>

int main() {
    int num, r_num = 0;

    printf("Enter the number:");
    scanf("%d", &num);

    // 计算逆序
    do {
        r_num = r_num * 10 + num % 10;
        num /= 10;
    } while (num > 0);

    printf("The reverse number is %d", r_num);

    return 0;
}

