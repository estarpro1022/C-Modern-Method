#include <stdio.h>

int main() {
    printf("%zu\n", sizeof(int));
    printf("%zu\n", sizeof(unsigned int));
    printf("%zu\n", sizeof(long));
    printf("%zu\b", sizeof(long long));
    /**
     * long 和 int 在CLion上所占位数竟然相同，long long才是最大的
     */
}

