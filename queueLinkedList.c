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



int main()
{
    struct node *head = NULL;
    struct node *rear = NULL;


    return 0;
}
