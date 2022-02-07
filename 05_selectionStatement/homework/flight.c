#include <stdio.h>
int main() {
    int hour, minute;
    printf("Enter a 24-hour time:");
    scanf("%d :%d", &hour, &minute);
    int a1 = 8 * 60;
    int a2 = 9 * 60 + 43;
    int a3 = 11 * 60 + 19;
    int a4 = 12 * 60 + 47;
    int a5 = 14 * 60;
    int a6 = 15 * 60 + 45;
    int a7 = 19 * 60;
    int a8 = 21 * 60 + 45;
    int a = hour * 60 + minute;
    int sub1 = a - a1, sub2 = a - a2, sub3 = a - a3, sub4 = a - a4, sub5 = a - a5, sub6 = a - a6;
    int sub7 = a - a7, sub8 = a - a8;
    sub1 = sub1 >= 0 ? sub1 : -sub1;
    sub2 = sub2 >= 0 ? sub2 : -sub2;
    sub3 = sub3 >= 0 ? sub3 : -sub3;
    sub4 = sub4 >= 0 ? sub4 : -sub4;
    sub5 = sub5 >= 0 ? sub5 : -sub5;
    sub6 = sub6 >= 0 ? sub6 : -sub6;
    sub7 = sub7 >= 0 ? sub7 : -sub7;
    sub8 = sub8 >= 0 ? sub8 : -sub8;
    int min;
    int min_index;
    if (sub1 > sub2) {
        min = sub2;
        min_index = 2;
    } else {
        min = sub1;
        min_index = 1;
    }
    if (min > sub3) {
        min = sub3;
        min_index = 3;
    }
    if (min > sub4) {
        min = sub4;
        min_index = 4;
    }
    if (min > sub5) {
        min = sub5;
        min_index = 5;
    }
    if (min > sub6) {
        min = sub6;
        min_index = 6;
    }
    if (min > sub7) {
        min = sub7;
        min_index = 7;
    }
    if (min > sub8) {
        min = sub8;
        min_index = 8;
    }
    int hour1, minute1;
    switch (min_index) {
        case 1:
            printf("Closest departure time is 8:00 a.m., arriving at 10:16 a.m.");
            break;
        case 2:
            printf("Closest departure time is 9:43 a.m., arriving at 11:52 a.m.");
            break;
        case 3:
            printf("Closest departure time is 11:19 a.m., arriving at 1:31 p.m.");
            break;
        case 4:
            printf("Closest departure time is 12:47 p.m., arriving at 3:00 p.m.");
            break;
        case 5:
            printf("Closest departure time is 2:00 p.m., arriving at 4:08 p.m.");
            break;
        case 6:
            printf("Closest departure time is 3:45 p.m., arriving at 5:55 p.m.");
            break;
        case 7:
            printf("Closest departure time is 7:00 p.m., arriving at 9:20 p.m.");
            break;
        case 8:
            printf("Closest departure time is 9:45 p.m., arriving at 11:58 p.m.");
            break;
        default:
            break;
    }
    return 0;
}