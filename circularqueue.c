#include<stdio.h>
void enqueue(int [], int *, int *, int );
void dequeue(int [], int *, int *, int );
void display(int [], int , int , int );
void main()
{
    int a[20], size, f = -1, r = -1, opt; 
    printf("<<<QUEUE OPERATIONS>>>\n");
    printf("Enter the size of the Queue: ");
    scanf("%d", &size);
    do
    {
        printf("\n<<<QUEUE OPERATIONS>>>\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n\n");
        scanf("%d", &opt);
        switch(opt)
        {
            case 1:
            enqueue(a, &r, &f, size);
            break;
            case 2:
            dequeue(a, &r, &f, size);
            break;
            case 3:
            display(a, r, f, size);
            break;
            default:
            printf("Invalid Choice");
            break;
        }
    }
    while(opt!=4);
}
void enqueue(int a[], int *r, int *f, int size)
{
    int *r = (*r+1) % size, element;
    if(*r == *f)
    printf("Queue is full");
    else
    {
        printf("Enter the element to insert: ");
        scanf("%d", &element);
        if(*f == -1)
        {
            *f = 0;
            Q[*r] = element;
        }
    }
}
void dequeue(int a[], int *f, int *r, int size)
{
    if(*f == -1)
    printf("Queue is Empty");
    if(*f == *r)
    {
        *f = -1;
        *r = -1;
    }
    if(*f == *r && *f > 0)
    {
        *f = -1;
        *r = -1;
    }
    if(*f = size -1)
    {
        *f = 0;
    }
    else
    {
        int item=a[*f];
        printf("The Deleted Element is %d", item);
    }
}
void display(int a[], int r, int f, int size)
{
    int i;
    if(f == -1)
    printf("queue is Empty.");
    else
    {
        printf("Queue is: ");
        for(i=f; i<=r; i++)
        {
            printf("%d ", a[i]);
        }
    }
}