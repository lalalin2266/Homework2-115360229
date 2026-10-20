#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int choice;
    printf("What is your job title?");
    scanf("%d", &choice);

    switch (choice) {
    case 1: {
        int week;
        printf("Fixed weekly salary: ");
        scanf("%d", &week);
        printf("%d dollars\n", week);
        break;
    }
    case 2: {
        int hr;
        double hr_money;
        double hourpeople;

        printf("working hour: ");
        scanf("%d", &hr);
        printf("Fixed hourly wage: ");
        scanf("%lf", &hr_money);

        if (hr <= 40) {
            hourpeople = hr * hr_money;
        }
        else {
            hourpeople = (40 * hr_money) + ((hr - 40) * hr_money * 1.5);
        }

        printf("%.2f dollars\n", hourpeople);
        break;
    }
    case 3: {
        int sales;
        printf("Total Weekly Sales: ");
        scanf("%d", &sales);
        double commission = 250.0 + (sales * 0.057);
        printf("%.2f dollars\n", commission);
        break;
    }
    case 4: {
        int product_money;
        printf("Unit price of the product: ");
        scanf("%d", &product_money);
        int product_amount;
        printf("Product Quantity: ");
        scanf("%d", &product_amount);
        int Piece_rate = product_money * product_amount;
        printf("%d dollars\n", Piece_rate);
        break;
    }
    default:
        printf("Invalid paycode.\n");
        break;
    }

    return 0;
}