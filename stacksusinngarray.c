#include<stdio.h>
#include<conio.h>
void push(int *top, int x, int a[], int n);
void pop(int *top, int item, int a[], int n);
void display(int i, int a[], int n,int *top);
void main()
{
    int a[20], n, top = -1, x, i, opt, item;
    printf("Enter the SIze of the Stack: ");
    scanf("%d", &n);
    printf("Stack Operations:\n");
    printf("1. PUSH\n");
    printf("2. POP\n");
    printf("3. DISPLAY\n");
    do
    {
        printf("\nEnter Your Option: ");
        scanf("%d", &opt);
        switch(opt)
        {
            case 1:
            push(&top, x, a, n);
            break;
            case 2:
            pop(&top, item, a, n);
            break;
            case 3:
            display(i, a, n, &top);
            break;
            default:
            printf("Invaliid Option.");
            break;
        }
    }
    while(opt!=4);
}
void push(int *top, int x, int a[], int n)
{
    if(*top == n-1)
    {
        printf("Stack is Full.\n");
    }
    else
    {
        printf("Enter the Element to be Pushed: ");
        scanf("%d", &x);
        *top = *top +1;
        a[*top] = x;
    }
}
void pop(int *top, int item, int a[], int n)
{
    if(*top == -1)
    {
        printf("Stack UnderFlow.");
    }
    else
    {
        item = a[*top];
        top--;
        printf("The Popped Item is: %d.\n", item);
    }
}
void display(int i, int a[], int n,int *top)
{
    printf("The Stack is: ");
    for(i=0; i<*top  ; i++)
    printf("%d  ", a[i]);
}