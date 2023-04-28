#include <stdio.h>
#include <stdlib.h>

struct list
{
    int data;
    struct list *next;
};

struct list *start = NULL;

void addbeg();
void beforeVal();
void display();

void main()
{
    int choice = 0;
    while (choice <= 3)
    {
        printf("1. AddBeg\n");
        printf("2. BeforeVal\n");
        printf("3. Display\n");
        printf("Enter input: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            addbeg();
            break;
        case 2:
            beforeVal();
            break;
        case 3:
            display();
            break;
        default:
            exit(0);
        }
    }
}

void addbeg()
{
    int a;
    struct list *new_node = (struct list *)malloc(sizeof(struct list *));
    printf("Enter the value you want to add: ");
    scanf("%d", &a);
    if (start == NULL)
    {
        new_node->next = NULL;
        new_node->data = a;
        start = new_node;
    }
    else
    {
        new_node->data = a;
        new_node->next = start;
        start = new_node;
    }
}

void beforeVal()
{
    int a, val;
    struct list *new_node = (struct list *)malloc(sizeof(struct list *));
    if (start != NULL)
    {
        struct list *ptr, *preptr;
        int num;
        ptr = start;
        preptr = ptr;
        printf("Enter the value before which you want to add this node: ");
        scanf("%d", &val);
        printf("enter the value you want to add: ");
        scanf("%d", &a);
        while (ptr->data != val)
        {
            preptr = ptr;
            ptr = ptr->next;
        }
        preptr->next = new_node;
        new_node->data = a;
        new_node->next = ptr;
    }
    else
    {
        printf("Empty");
    }
}

void display()
{
    if (start->next != NULL)
    {
        struct list *ptr;
        ptr = start;
        while (ptr->next != NULL)
        {
            printf("%d Element\n", ptr->data);
            ptr = ptr->next;
        }
        printf("%d Element\n", ptr->data);
    }
    else
    {
        printf("%d Element\n", start->data);
    }
}