#include<stdio.h>
#include<stdlib.h>
int main() {
	int i, j, space;
	for (i = 1;i <= 5;i++) {
		for (space = 1;space <= 5- i;space++) {
			printf(" ");
		}
		for (j = 1;j <= 2*i-1;j++) {
			printf("%s", "*");
		}
		printf("\n");
	}
	for (i = 4;i >= 1;i--) {
		for (space = 4;space >= i;space--) {
			printf(" ");
		}
		for (j =1 ;j <= i * 2 - 1;j++) {
			printf("%s", "*");
		}
		printf("\n");
	}
	
}