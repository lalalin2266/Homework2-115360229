#include<stdio.h>
#include<stdlib.h>
int main() {
	double a, b;
	printf("Enter sales in dollars(-1 to end): ");
	scanf_s("%lf", &a);
	while (a != -1) {
		b = 200 + 0.09 * a;
		printf("Salary is :$");
		printf("%.2f\n", b);
		printf("Enter sales in dollars(-1 to end): ");
		scanf_s("%lf", &a);
	}
	return 0;
}