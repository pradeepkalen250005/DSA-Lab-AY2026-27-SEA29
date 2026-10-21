
/*
Name: PRADEEP KALE
Roll No: SEA 29
Practical 01: Pattern Printing Using Functions
*/

#include <stdio.h>

void rightAngleTriangle(void) {
    int n = 4;

    printf("\n1. Right-Angle Triangle with Numbers\n");

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
}

void diamondNumbers(void) {
    int n = 4;

    printf("\n2. Diamond Shape with Numbers\n");

    for (int i = 1; i <= n; i++) {
        for (int j = n - 1; j >= i; j--) {
            printf(" ");
        }

        for (int j = 1; j <= i; j++) {
            printf("%d ", i);
        }
        printf("\n");
    }

    for (int i = n - 1; i >= 1; i--) {
        for (int j = i; j < n; j++) {
            printf(" ");
        }

        for (int j = 1; j <= i; j++) {
            printf("%d ", i);
        }
        printf("\n");
    }
}

void pyramidAsterisks(void) {
    int n = 4;

    printf("\n3. Pyramid with Asterisks\n");

    for (int i = 1; i <= n; i++) {
        for (int j = n - 1; j >= i; j--) {
            printf(" ");
        }

        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

void pyramidAlphabets(void) {
    int n = 4;

    printf("\n4. Pyramid Using Alphabets\n");

    for (int i = 0; i < n; i++) {
        char ch = 'A';

        for (int j = n - 1; j > i; j--) {
            printf(" ");
        }

        for (int j = 0; j <= i; j++) {
            printf("%c", ch + j);
        }

        for (int j = i; j > 0; j--) {
            printf("%c", ch + j - 1);
        }

        printf("\n");
    }
}

int main(void) {
    rightAngleTriangle();
    diamondNumbers();
    pyramidAsterisks();
    pyramidAlphabets();

    return 0;
}

