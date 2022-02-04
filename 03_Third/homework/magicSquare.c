//
// Created by estar on 2022/1/30.
//
#include <stdio.h>
int RowSums(int a[], int index) {
    return (a[index] + a[index + 1] + a[index + 2] + a[index + 3]);
}
int ColumnSums(int a[], int index) {
    return (a[index] + a[index + 4] + a[index + 8] + a[index + 12]);
}
int main() {
    int a[16];
    for (int i = 0; i < 16; i++) {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < 16; i++) {
        printf("%2d", a[i]);
        if ((i + 1) % 4 == 0) {
            printf("\n");
        } else {
            printf("  ");
        }
    }
    printf("Row sums: %d %d %d %d\n", RowSums(a, 0), RowSums(a, 4), RowSums(a, 8),
           RowSums(a, 12));
    printf("Column sums: %d %d %d %d\n", ColumnSums(a, 0), ColumnSums(a, 1)
    , ColumnSums(a, 2), ColumnSums(a, 3));
    printf("Diagonal sums: %d %d\n", a[0] + a[5] + a[10] + a[15], a[3] + a[6] + a[9] + a[12]);
    // 对角线和
}
