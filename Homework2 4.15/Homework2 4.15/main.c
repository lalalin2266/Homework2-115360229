#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main() {
	double p=5000,rate,amount;
	int year = 15,i, count;
	for (count=0;count<=4;count++) {
		rate = 0.10 + count * 0.005;
		printf("rate = %.2f%%\n",rate*100);
		for (i = 1; i <= year;i++) {
			amount = p * pow(1 + rate, i);
			printf("year = %d,amount = %lf\n", i, amount);
		}
		
	}

}