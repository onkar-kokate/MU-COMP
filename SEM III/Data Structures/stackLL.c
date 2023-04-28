#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* head = NULL;

void pushEle() {
    int data;
    printf("Enter the data: ");
    scanf("%d", &data);
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = head;
    head = newNode;
}

void popEle() {
    if (head == NULL) {
        printf("List is empty\n");
    }
    else {
        struct Node* temp = head;
        head = head->next;
        free(temp);
    }
}

void displayEle() {
    struct Node* temp = head;
    if (temp == NULL) {
        printf("List is empty\n");
    }
    else {
        while (temp != NULL) {
            printf("%d ", temp->data);
            temp = temp->next;
        }
        printf("\n");
    }
}

void main() {
    int choice = 0;
    while (choice <= 3) {
        printf("1. Push Element\n");
        printf("2. Pop Element\n");
        printf("3. Display Element\n");
        printf("Enter input: ");
        scanf("%d", &choice);
        switch (choice) {
        case 1:
            pushEle();
            break;
        case 2:
            popEle();
            break;
        case 3:
            displayEle();
            break;
        default:
            exit(0);
        }
    }
}
