#include <stdio.h>
#define max 3
int cqueue[max], front = -1, rear = -1;
void enqueue();
void dequeue();
void display();

void main()
{
    int choice = 0;
    while (choice <= 3)
    {
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("Enter input: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        default:
            exit(0);
        }
    }
}

void enqueue()
{
    if (front == -1 && rear == -1)
    {
        int a;
        front = 0;
        rear = 0;
        printf("The element you want to add: ");
        scanf("%d", &a);
        cqueue[rear] = a;
    }
    else if (((rear + 1) % max) == front)
    {
        printf("Queue is full \n");
    }
    else
    {
        int a;
        printf("The element you want to add: ");
        scanf("%d", &a);
        rear = (rear + 1) % max;
        cqueue[rear] = a;
    }
}

void dequeue()
{
    if (front == -1)
    {
        printf("Queue is empty \n");
    }
    else if (front == rear)
    {
        printf("%d\n", cqueue[front]);
        front = -1;
        rear = -1;
    }
    else
    {
        printf("%d\n", cqueue[front]);
        front = (front + 1) % max;
    }
}

void display()
{
    int a = front;
    if (front == -1)
    {
        printf("empty\n");
    }
    else
    {
        while (a != rear)
        {
            printf("%d Element \n", cqueue[a]);
            a = (a + 1) % max;
        }
        printf("%d Element \n", cqueue[a]);
    }
}