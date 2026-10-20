#include <stdio.h>
#include <stdlib.h>
int main() {
	int a;
	double b, c, d, e,f;
	printf("Enter account number(-1 to end): ");
	scanf_s("%d", &a);
	while (a != -1) {
		printf("Enter beginning balance: ");
		scanf_s("%lf", &b);
		printf("Enter total charges:");
		scanf_s("%lf", &c);
		printf("Enter total credits:");
		scanf_s("%lf", &d);
		printf("Enter credit limit:");
		scanf_s("%lf", &e);
		f = b + c - d;
		if (f > e) {
			printf("Account: %d\n", a);
			printf("Credit limit: %.2lf\n", e);
			printf("Balance: %.2lf\n", f);
			printf("Credit Limit Exceeded.\n");
			printf("\n");
		}
		printf("Enter account number(-1 to end):");
		scanf_s("%d", &a);
	}
	return 0;
}
	