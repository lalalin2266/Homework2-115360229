#include<stdio.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int i, j;
    printf("(A)\t\t\t(B)\t\t\t(C)\t\t\t(D)\n");
    for (i = 1; i <= 10; i++) {
        for (j = 1; j <= i; j++) {
            printf("%s", "*");
        }
        for (j = 1; j <= 10 - i; j++) {
            printf("%s", " ");
        }
        printf("\t\t");
        for (j = 1; j <= 11 - i; j++) {
            printf("%s", "*");
        }
        for (j = 1; j <= i - 1; j++) {
            printf("%s", " ");
        }
        printf("\t\t"); 
        for (j = 1; j <= i - 1; j++) {
            printf("%s", " ");
        }
        for (j = 1; j <= 11 - i; j++) {
            printf("%s", "*");
        }
        printf("\t\t"); 
        for (j = 1; j <= 10 - i; j++) {
            printf("%s", " ");
        }
        for (j = 1; j <= i; j++) {
            printf("%s", "*");
        }
        printf("\n");
    }

    return 0;
}