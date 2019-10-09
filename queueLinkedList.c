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

void enqueue(struct node *front, stuct node *rear, int element)
{
    struct node *temp = front;
    struct node *newNode = malloc(sizeof(struct node));
    newNode->element = element;
    newNode->next = NULL;

    if(isEmpty())
    {
        front = newNode;
        rear = newNode;
    }

    else
    {
        rear = rear->next;
        rear = newNode;
    }


    return front;
}

int main()
{
    struct node *front = NULL;
    struct node *rear = NULL;


    return 0;
}
