#include "stdlib.h"
#include "stdio.h"
#include "stdbool.h"

struct node
{
    int element;
    struct node *next;
};

bool isEmpty(struct node *front, struct node *rear)
{
    if(front == NULL && rear == NULL)
        return true;
    else
        return false;
}

struct node *enQueue(struct node *front, struct node *rear, int element)
{
    struct node *temp = front;
    struct node *newNode = malloc(sizeof(struct node));
    newNode->element = element;
    newNode->next = NULL;

    if(isEmpty(front, rear))
    {
        front = newNode;
        rear = newNode;
        return front;
    }

    else
    {
        rear = rear->next;
        rear = newNode;
    }


    return front;
}

void printQueue(struct node *front)
{
    struct node *temp = front;

    while(temp != NULL)
    {
        printf("%d ", temp->element);
        temp = temp->next;
    }
    printf("\n");
}

int main()
{
    struct node *front = NULL;
    struct node *rear = NULL;
    front = enQueue(front, rear, 10);
    printQueue(front);

    return 0;
}
