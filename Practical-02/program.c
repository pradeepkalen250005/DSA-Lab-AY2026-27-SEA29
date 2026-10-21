
#include <stdio.h>

typedef struct stud {
    int rn;
    char name[10];
    char program[10];
    char sub1[10];
    char sub2[10];
    int sub1_mk;
    int sub2_mk;
    int total;
    float avg;
} stud;

void create(stud s[], int n);
void disp(stud s[], int n);
void search(stud s[], int n, int key);
void sort(stud s[], int n);

int main(void) {
    stud s[20];
    int n = 0, op, key;

    do {
        printf("\n--- Student Result Database ---\n");
        printf("1. Create\n");
        printf("2. Display\n");
        printf("3. Search\n");
        printf("4. Sort by Roll Number\n");
        printf("5. Exit\n");
        printf("Enter the option: ");
        scanf("%d", &op);

        switch (op) {
            case 1:
                printf("Enter number of students (1-20): ");
                scanf("%d", &n);

                if (n < 1 || n > 20) {
                    printf("Invalid number of students!\n");
                    n = 0;
                } else {
                    create(s, n);
                }
                break;

            case 2:
                if (n == 0)
                    printf("Please create student records first.\n");
                else
                    disp(s, n);
                break;

            case 3:
                if (n == 0) {
                    printf("Please create student records first.\n");
                } else {
                    printf("Enter roll number to search: ");
                    scanf("%d", &key);
                    search(s, n, key);
                }
                break;

            case 4:
                if (n == 0) {
                    printf("Please create student records first.\n");
                } else {
                    sort(s, n);
                    printf("Records sorted by roll number.\n");
                }
                break;

            case 5:
                printf("Exiting program.\n");
                break;

            default:
                printf("Invalid option! Try again.\n");
        }
    } while (op != 5);

    return 0;
}

void create(stud s[], int n) {
    for (int i = 0; i < n; i++) {
        printf("\nEnter details of student %d:\n", i + 1);

        printf("Roll number: ");
        scanf("%d", &s[i].rn);

        printf("Name: ");
        scanf("%9s", s[i].name);

        printf("Program: ");
        scanf("%9s", s[i].program);

        printf("Subject 1 name: ");
        scanf("%9s", s[i].sub1);

        printf("Subject 2 name: ");
        scanf("%9s", s[i].sub2);

        printf("Subject 1 marks: ");
        scanf("%d", &s[i].sub1_mk);

        printf("Subject 2 marks: ");
        scanf("%d", &s[i].sub2_mk);

        s[i].total = s[i].sub1_mk + s[i].sub2_mk;
        s[i].avg = s[i].total / 2.0f;
    }

    printf("\nStudent records created successfully!\n");
}

void disp(stud s[], int n) {
    printf("\n%-8s %-10s %-10s %-10s %-10s %-8s %-8s %-8s %-8s\n",
           "Roll No", "Name", "Program", "Subject1",
           "Subject2", "Marks1", "Marks2", "Total", "Average");

    for (int i = 0; i < n; i++) {
        printf("%-8d %-10s %-10s %-10s %-10s %-8d %-8d %-8d %-8.2f\n",
               s[i].rn, s[i].name, s[i].program,
               s[i].sub1, s[i].sub2,
               s[i].sub1_mk, s[i].sub2_mk,
               s[i].total, s[i].avg);
    }
}

void search(stud s[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (s[i].rn == key) {
            printf("\nStudent record found!\n");
            printf("Roll Number : %d\n", s[i].rn);
            printf("Name        : %s\n", s[i].name);
            printf("Program     : %s\n", s[i].program);
            printf("Subject 1   : %s (%d marks)\n",
                   s[i].sub1, s[i].sub1_mk);
            printf("Subject 2   : %s (%d marks)\n",
                   s[i].sub2, s[i].sub2_mk);
            printf("Total Marks : %d\n", s[i].total);
            printf("Average     : %.2f\n", s[i].avg);
            return;
        }
    }

    printf("Record of roll number %d not found.\n", key);
}

void sort(stud s[], int n) {
    stud temp;

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (s[j].rn > s[j + 1].rn) {
                temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
            }
        }
    }
}

