
/*
Name: PRADEEP KALE
Roll No: SEA29
Practical 07: Dynamic Text Editor Using Singly Linked List
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct SLL {
    char data[10];
    struct SLL *next;
} SLL;

void create(SLL **head);
void insert(SLL **head);
void display(SLL *head);
void deleteNode(SLL **head);
void reverse(SLL **head);
void freeList(SLL **head);

int main(void) {
    SLL *head = NULL;
    int op;

    do {
        printf("\n1. Create\n");
        printf("2. Insert\n");
        printf("3. Display\n");
        printf("4. Delete\n");
        printf("5. Reverse\n");
        printf("6. Exit\n");
        printf("Enter option: ");
        scanf("%d", &op);

        switch (op) {
            case 1:
                create(&head);
                break;

            case 2:
                insert(&head);
                break;

            case 3:
                display(head);
                break;

            case 4:
                deleteNode(&head);
                break;

            case 5:
                reverse(&head);
                break;

            case 6:
                printf("Exited successfully.\n");
                break;

            default:
                printf("Invalid option.\n");
        }
    } while (op != 6);

    freeList(&head);
    return 0;
}

void create(SLL **head) {
    int ans;
    SLL *nw, *p;

    do {
        nw = (SLL *)malloc(sizeof(SLL));

        if (nw == NULL) {
            printf("Memory allocation failed.\n");
            return;
        }

        printf("Enter data (maximum 9 characters): ");
        scanf("%9s", nw->data);
        nw->next = NULL;

        if (*head == NULL) {
            *head = nw;
        } else {
            p = *head;
            while (p->next != NULL) {
                p = p->next;
            }
            p->next = nw;
        }

        printf("Do you want to continue? (1 = Yes, 0 = No): ");
        scanf("%d", &ans);
    } while (ans == 1);
}

void insert(SLL **head) {
    int loc, i;
    SLL *nw, *p;

    printf("Enter location to insert: ");
    scanf("%d", &loc);

    if (loc < 1) {
        printf("Invalid location.\n");
        return;
    }

    nw = (SLL *)malloc(sizeof(SLL));

    if (nw == NULL) {
        printf("Memory allocation failed.\n");
        return;
    }

    printf("Enter data (maximum 9 characters): ");
    scanf("%9s", nw->data);

    if (loc == 1) {
        nw->next = *head;
        *head = nw;
        printf("Node inserted successfully.\n");
        return;
    }

    p = *head;

    for (i = 1; i < loc - 1 && p != NULL; i++) {
        p = p->next;
    }

    if (p == NULL) {
        printf("Invalid location.\n");
        free(nw);
        return;
    }

    nw->next = p->next;
    p->next = nw;

    printf("Node inserted successfully.\n");
}

void display(SLL *head) {
    SLL *p = head;

    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }

    while (p != NULL) {
        printf("%s->", p->data);
        p = p->next;
    }

    printf("NULL\n");
}

void deleteNode(SLL **head) {
    int loc, i;
    SLL *p, *q;

    if (*head == NULL) {
        printf("List is empty. Nothing to delete.\n");
        return;
    }

    printf("Enter location to delete: ");
    scanf("%d", &loc);

    if (loc < 1) {
        printf("Invalid location.\n");
        return;
    }

    if (loc == 1) {
        p = *head;
        *head = (*head)->next;
        free(p);
        printf("Node deleted successfully.\n");
        return;
    }

    q = *head;

    for (i = 1; i < loc - 1 && q != NULL; i++) {
        q = q->next;
    }

    if (q == NULL || q->next == NULL) {
        printf("Invalid location.\n");
        return;
    }

    p = q->next;
    q->next = p->next;
    free(p);

    printf("Node deleted successfully.\n");
}

void reverse(SLL **head) {
    SLL *prev = NULL;
    SLL *current = *head;
    SLL *nextNode;

    while (current != NULL) {
        nextNode = current->next;
        current->next = prev;
        prev = current;
        current = nextNode;
    }

    *head = prev;

    printf("List reversed successfully.\n");
    display(*head);
}

void freeList(SLL **head) {
    SLL *p;

    while (*head != NULL) {
        p = *head;
        *head = (*head)->next;
        free(p);
    }
}
