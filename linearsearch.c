#include<stdio.h>
int linearsearch(int [], int , int );
void main()
{
    int n, i, a[20], ele, index;
    printf("Enter the Number of Element in the Array: ");
    scanf("%d", &n);
    printf("Enter the Array: ");
    for(i=0; i<n; i++)
    scanf("%d", &a[i]);
    printf("The Element to be Searched: ");
    scanf("%d", &ele);
    index = linearsearch(a, n, ele);
    if(index != n+1)
    {
        printf("Element found in the Index: %d", index);
    }
    else
    {
        printf("Element Not Found.");
    }
}
int linearsearch(int a[], int n, int ele)
{
    int i;
    for(i=0; i<n; i++)
    {
        if(a[i] == ele)
        {
            return i;
        }
    }
    return n+1;
}