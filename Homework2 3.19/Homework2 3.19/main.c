	#include<stdio.h>
	#include<stdlib.h>
	int main() {
		double interest, principal, rate, day;
		printf("Enter loan principal(-1 to end):");
		scanf_s("%lf", &principal);
		while (principal != -1) {
			printf("Enter interest rate:");
			scanf_s("%lf", &rate);
			printf("Enter term of the loan in days:");
			scanf_s("%lf", &day);
			interest = principal * rate * day / 365;
			printf("The interest charge is $%.2lf\n",interest);
			printf("Enter loan principal(-1 to end):");
			scanf_s("%lf", &principal);
		}

	}