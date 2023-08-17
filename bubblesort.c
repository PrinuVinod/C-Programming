#include<stdio.h>
void bsort(int [], int);
void display(int [], int);
void main()
{
    int i, n, a[20];
    printf("Enter the number of Element: ");
    scanf("%d", &n);
    printf("Enter the Elements of the Array: ");
    for(i=0; i<n; i++)
    scanf("%d", &a[i]);
    bsort(a, n);
    display(a, n);
}
void bsort(int a[], int n)
{
    int i, j, temp;
    for(i=0; i<(n-1); i++)
    {
        for(j=0; j<(n-i-1); j++)
        {
            if(a[j] > a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                
            }
        }
    }
}
void display(int a[], int n)
{
    int i;
    printf("Sorted Array is: ");
    for(i=0; i<n; i++)
    {
        printf("%d", a[i]);
    }
}