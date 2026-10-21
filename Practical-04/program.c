
/*
Name: PRADEEP KALE
Roll No: SEA29
Practical 04: Decimal to Binary Conversion Using Stack
*/

#include <stdio.h>

int main(void) {
    int n;
    int s[32];
    int top = -1;

    printf("Enter Decimal number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Please enter a non-negative decimal number.\n");
        return 1;
    }

    if (n == 0) {
        printf("Binary number for given decimal number is: 0\n");
        return 0;
    }

    while (n != 0) {
        int r = n % 2;
        n = n / 2;

        top++;
        s[top] = r;
    }

    printf("Binary number for given decimal number is: ");

    while (top >= 0) {
        printf("%d", s[top]);
        top--;
    }

    printf("\n");
    return 0;
}

