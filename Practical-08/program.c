// Name: PRADEEP KALE
// Roll no: SEA-29
// Binary Search Tree Operation for Online Directory System

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node {
    char name[30];
    char mobile[15];
    struct Node *left, *right;
};

// Create new node
struct Node* createNode(char name[], char mobile[]) {
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    strcpy(newNode->name, name);
    strcpy(newNode->mobile, mobile);
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Insert
struct Node* insert(struct Node *root, char name[], char mobile[]) {
    if (root == NULL)
        return createNode(name, mobile);
        
    if (strcmp(name, root->name) < 0)
        root->left = insert(root->left, name, mobile);
    else if (strcmp(name, root->name) > 0)
        root->right = insert(root->right, name, mobile);
    else
        printf("Contact with name '%s' already exists!\n", name);
        
    return root;
}

// Inorder
void inorder(struct Node *root) {
    if (root != NULL) {
        inorder(root->left);
        printf("%s\t%s\n", root->name, root->mobile);
        inorder(root->right);
    }
}

// Preorder
void preorder(struct Node *root) {
    if (root != NULL) {
        printf("%s\t%s\n", root->name, root->mobile);
        preorder(root->left);
        preorder(root->right);
    }
}

// Postorder
void postorder(struct Node *root) {
    if (root != NULL) {
        postorder(root->left);
        postorder(root->right);
        printf("%s\t%s\n", root->name, root->mobile);
    }
}

// Search
void search(struct Node *root, char name[]) {
    if (root == NULL) {
        printf("Contact not found.\n");
        return;
    }
    
    if (strcmp(name, root->name) == 0) {
        printf("\nContact Found!\n");
        printf("Name : %s\n", root->name);
        printf("Mobile : %s\n", root->mobile);
    } 
    else if (strcmp(name, root->name) < 0)
        search(root->left, name);
    else
        search(root->right, name);
}

int main() {
    struct Node *root = NULL;
    int choice;
    char name[30], mobile[15];

    do {
        printf("\n--- ONLINE DIRECTORY SYSTEM ---\n");
        printf("1. Create / Insert\n");
        printf("2. Display All Traversals\n");
        printf("3. Search\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        
        // Prevents infinite loops if a letter/string is typed into choice
        if (scanf("%d", &choice) != 1) {
            printf("Invalid input! Please enter a number.\n");
            while (getchar() != '\n'); // clear buffer
            choice = 0;
            continue;
        }

        switch (choice) {
            case 1:
                printf("Enter name: ");
                scanf("%s", name);
                printf("Enter mobile number: ");
                scanf("%s", mobile);
                root = insert(root, name, mobile);
                printf("Contact added successfully.\n");
                break;
                
            case 2:
                if (root == NULL) {
                    printf("\nDirectory is empty!\n");
                    break;
                }
                printf("\n--- INORDER TRAVERSAL ---\n");
                printf("Name\tMobile\n");
                inorder(root);

                printf("\n--- PREORDER TRAVERSAL ---\n");
                printf("Name\tMobile\n");
                preorder(root);

                printf("\n--- POSTORDER TRAVERSAL ---\n");
                printf("Name\tMobile\n");
                postorder(root);
                break;
                
            case 3:
                printf("Enter name to search: ");
                scanf("%s", name);
                search(root, name);
                break;
                
            case 4:
                printf("Exiting program...\n");
                break;
                
            default:
                printf("Invalid choice!\n");
        }
    } while (choice != 4);

    return 0;
}
