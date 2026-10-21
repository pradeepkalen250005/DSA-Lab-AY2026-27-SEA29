
/*
Name: PRADEEP KALE
Roll No: SEA29
Practical 03: Searching Contact Name Using
Sequential and Binary Search
*/

#include <stdio.h>
#include <string.h>
#include <strings.h>

typedef struct contact {
    char name[20];
    char phone[20];
    char address[20];
} contact;

int main(void) {
    contact c[20], temp;
    int n, i, j;
    int lincom = 0, linfound = 0, bincom = 0;
    int low, high, mid, binfound = 0;
    char key[20];

    printf("Enter number of contacts (1-20): ");
    scanf("%d", &n);

    if (n < 1 || n > 20) {
        printf("Invalid number of contacts!\n");
        return 1;
    }

    printf("\n--- ENTER CONTACT DETAILS ---\n");

    for (i = 0; i < n; i++) {
        printf("\nContact %d\n", i + 1);

        printf("Name: ");
        scanf("%19s", c[i].name);

        printf("Contact number: ");
        scanf("%19s", c[i].phone);

        printf("Address: ");
        scanf("%19s", c[i].address);
    }

    printf("\n--- DISPLAYING CONTACTS ---\n");

    for (i = 0; i < n; i++) {
        printf("\nContact %d\n", i + 1);
        printf("Name: %s\n", c[i].name);
        printf("Contact: %s\n", c[i].phone);
        printf("Address: %s\n", c[i].address);
    }

    printf("\nEnter name of contact to search: ");
    scanf("%19s", key);

    /* Sequential Search */
    printf("\n--- SEQUENTIAL SEARCH ---\n");

    for (i = 0; i < n; i++) {
        lincom++;

        if (strcasecmp(key, c[i].name) == 0) {
            printf("Contact found!\n");
            printf("Name: %s\n", c[i].name);
            printf("Contact: %s\n", c[i].phone);
            printf("Address: %s\n", c[i].address);
            linfound = 1;
            break;
        }
    }

    if (!linfound) {
        printf("Contact not found.\n");
    }

    printf("Sequential search comparisons: %d\n", lincom);

    /* Sort contacts alphabetically using Bubble Sort */
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (strcasecmp(c[j].name, c[j + 1].name) > 0) {
                temp = c[j];
                c[j] = c[j + 1];
                c[j + 1] = temp;
            }
        }
    }

    printf("\n--- CONTACTS SORTED A-Z ---\n");

    for (i = 0; i < n; i++) {
        printf("%s\n", c[i].name);
    }

    /* Binary Search */
    printf("\n--- BINARY SEARCH ---\n");

    low = 0;
    high = n - 1;

    while (low <= high) {
        mid = low + (high - low) / 2;
        bincom++;

        if (strcasecmp(c[mid].name, key) == 0) {
            printf("Contact found at sorted position %d.\n", mid + 1);
            printf("Name: %s\n", c[mid].name);
            printf("Contact: %s\n", c[mid].phone);
            printf("Address: %s\n", c[mid].address);
            binfound = 1;
            break;
        } else if (strcasecmp(c[mid].name, key) < 0) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    if (!binfound) {
        printf("Contact not found.\n");
    }

    printf("Binary search comparisons: %d\n", bincom);

    return 0;
}

