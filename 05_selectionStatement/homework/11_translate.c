#include <stdio.h>
int main() {
    int num;
    printf("Enter a two-digit number:");
    scanf("%d", &num);
    int ten = num / 10;
    int one = num % 10;
    printf("You entered the number ");
    switch (ten) {
        case 1:
            switch (one) {
                case 1:
                    printf("eleven");
                    break;
                case 2:
                    printf("twelve");
                    break;
                case 3:
                    printf("thirteen");
                    break;
                case 4:
                    printf("fourteen");
                    break;
                case 5:
                    printf("fifteen");
                    break;
                case 6:
                    printf("sixteen");
                    break;
                case 7:
                    printf("seventeen");
                    break;
                case 8:
                    printf("eighteen");
                    break;
                case 9:
                    printf("nineteen");
                    break;
                default:
                    printf("ten");
                    break;
            }
            break;
        case 2:
            printf("twenty");
            switch (one) {
                case 0:
                    break;
                case 1:
                    printf("-first");
                    break;
                case 2:
                    printf("-second");
                    break;
                case 3:
                    printf("-third");
                    break;
                case 4:
                    printf("-fourth");
                    break;
                case 5:
                    printf("-fifth");
                    break;
                case 6:
                    printf("-sixth");
                    break;
                case 7:
                    printf("-seventh");
                    break;
                case 8:
                    printf("-eighth");
                    break;
                case 9:
                    printf("-ninth");
                    break;
            }
            break;
        case 3:
            printf("thirty");
            switch (one) {
                case 0:
                    break;
                case 1:
                    printf("-first");
                    break;
                case 2:
                    printf("-second");
                    break;
                case 3:
                    printf("-third");
                    break;
                case 4:
                    printf("-fourth");
                    break;
                case 5:
                    printf("-fifth");
                    break;
                case 6:
                    printf("-sixth");
                    break;
                case 7:
                    printf("-seventh");
                    break;
                case 8:
                    printf("-eighth");
                    break;
                case 9:
                    printf("-ninth");
                    break;
            }
            break;
        case 4:
            printf("forty");
            switch (one) {
                case 0:
                    break;
                case 1:
                    printf("-first");
                    break;
                case 2:
                    printf("-second");
                    break;
                case 3:
                    printf("-third");
                    break;
                case 4:
                    printf("-fourth");
                    break;
                case 5:
                    printf("-fifth");
                    break;
                case 6:
                    printf("-sixth");
                    break;
                case 7:
                    printf("-seventh");
                    break;
                case 8:
                    printf("-eighth");
                    break;
                case 9:
                    printf("-ninth");
                    break;
            }
            break;
        case 5:
            printf("fifty");
            switch (one) {
                case 0:
                    break;
                case 1:
                    printf("-first");
                    break;
                case 2:
                    printf("-second");
                    break;
                case 3:
                    printf("-third");
                    break;
                case 4:
                    printf("-fourth");
                    break;
                case 5:
                    printf("-fifth");
                    break;
                case 6:
                    printf("-sixth");
                    break;
                case 7:
                    printf("-seventh");
                    break;
                case 8:
                    printf("-eighth");
                    break;
                case 9:
                    printf("-ninth");
                    break;
            }
            break;
        case 6:
            printf("sixty");
            switch (one) {
                case 0:
                    break;
                case 1:
                    printf("-first");
                    break;
                case 2:
                    printf("-second");
                    break;
                case 3:
                    printf("-third");
                    break;
                case 4:
                    printf("-fourth");
                    break;
                case 5:
                    printf("-fifth");
                    break;
                case 6:
                    printf("-sixth");
                    break;
                case 7:
                    printf("-seventh");
                    break;
                case 8:
                    printf("-eighth");
                    break;
                case 9:
                    printf("-ninth");
                    break;
            }
            break;
        case 7:
            printf("seventy");
            switch (one) {
                case 0:
                    break;
                case 1:
                    printf("-first");
                    break;
                case 2:
                    printf("-second");
                    break;
                case 3:
                    printf("-third");
                    break;
                case 4:
                    printf("-fourth");
                    break;
                case 5:
                    printf("-fifth");
                    break;
                case 6:
                    printf("-sixth");
                    break;
                case 7:
                    printf("-seventh");
                    break;
                case 8:
                    printf("-eighth");
                    break;
                case 9:
                    printf("-ninth");
                    break;
            }
            break;
        case 8:
            printf("eighty");
            switch (one) {
                case 0:
                    break;
                case 1:
                    printf("-first");
                    break;
                case 2:
                    printf("-second");
                    break;
                case 3:
                    printf("-third");
                    break;
                case 4:
                    printf("-fourth");
                    break;
                case 5:
                    printf("-fifth");
                    break;
                case 6:
                    printf("-sixth");
                    break;
                case 7:
                    printf("-seventh");
                    break;
                case 8:
                    printf("-eighth");
                    break;
                case 9:
                    printf("-ninth");
                    break;
            }
            break;
        case 9:
            printf("ninety");
            switch (one) {
                case 0:
                    break;
                case 1:
                    printf("-first");
                    break;
                case 2:
                    printf("-second");
                    break;
                case 3:
                    printf("-third");
                    break;
                case 4:
                    printf("-fourth");
                    break;
                case 5:
                    printf("-fifth");
                    break;
                case 6:
                    printf("-sixth");
                    break;
                case 7:
                    printf("-seventh");
                    break;
                case 8:
                    printf("-eighth");
                    break;
                case 9:
                    printf("-ninth");
                    break;
            }
            break;
    }
    printf(".");
    return 0;
}











