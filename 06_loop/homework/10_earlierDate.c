
#include <stdio.h>

int main() {
//    setbuf(stdout,NULL);
    int year1, year2, month1, month2, day1, day2;

    printf("Enter the date (mm/dd/yy):");
//    fflush(stdout);
    scanf("%d /%d /%d", &month1, &day1, &year1);

    do {
        printf("Enter the date (mm/dd/yy):");
//        fflush(stdout);
        scanf("%d /%d /%d", &month2, &day2, &year2);
        if (!month2 && !day2 && !year2)
            break;
        if (year1 > year2) {
            year1 = year2;
            month1 = month2;
            day1 = day2;
        } else if (year1 < year2) {
            continue;
        } else {
            if (month1 > month2) {
                month1 = month2;
                day1 = day2;
            } else if (month1 < month2) {
                continue;
            } else {
                if (day1 < day2) {
                    continue;
                } else {
                    day1 = day2;
                }
            }
        }
    } while (1);
//    printf("\n");
    printf("The earliest date is %d/%d/%.2d", month1, day1, year1);
//    fflush(stdout);

    return 0;
}

