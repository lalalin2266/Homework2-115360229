#include<stdio.h>
#include<stdlib.h>
int main() {
	int hours;
	double rate,salary;
	printf("Enter # of hours worked (-1 to end):");
	scanf_s("%d", &hours);
	while (hours != -1) {
		printf("Enter hourly rate of the worker ($00.00):");
		scanf_s("%lf", &rate);
		
		if (hours <= 40){
			salary = hours * rate;	
		}
		else {
			salary = 40 * rate + ((hours - 40) * rate * 1.5);
		}
		printf("Salary is $");
		printf("%.2lf\n", salary);
		printf("Enter # of hours worked (-1 to end):");
		scanf_s("%d", &hours);
	}
	return 0;
}
