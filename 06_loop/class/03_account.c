#include <stdio.h>

int main() {
    printf("Commands: 0 = clear, 1 = credit, 2 = debit\n"
           "3 = show money, 4 = exit\n");

    int num;
    float balance = 0.0f;
    float credit, debit;
    while (1) {
        printf("Enter the number:");
        scanf("%d", &num);
        switch (num) {
            case 0:
                balance = 0.0f;
                break;
            case 1:
                printf("Enter amount of credit:");
                scanf("%f", &credit);
                // %f not %d
                balance += credit;
                break;
                /**
                 * use out_credit instead of break;
                 * due to double loops
                 * break is only able to break one loop
                 */
            case 2:
                printf("Enter amount of debit:");
                scanf("%f", &debit);
                balance -= debit;
                break;
            case 3:
                printf("Current balance is %f\n", balance);
                break;
            case 4:
                return 0;
            default:
                printf("Command not found\n");
                break;
        }
    }
}

