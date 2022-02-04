//
// Created by estar on 2022/1/30.
//
#include <stdio.h>
int main() {
    int prefix, mid, latter;
    printf("Enter phone number [(xxx) xxx-xxxx]:");
    scanf("(%d) %d-%d", &prefix, &mid, &latter);
    printf("You enter %.3d.%.3d.%.4d", prefix, mid, latter);
    return 0;
}
