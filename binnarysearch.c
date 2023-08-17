#include<stdio.h>
int binarysearch(int [], int , int );
void main()
{
    int n, i, a[20], ele, index, l;
    printf("Enter the Number of Element in the Array: ");
    scanf("%d", &n);
    printf("Enter the Array in Ascending Order: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("The Element to be Searched: ");
    scanf("%d", &ele);
    index = binarysearch(a, n, ele);
    if(index != l+1)
    {
        printf("Element found in the Index: %d", index);
    }
    else
    {
        printf("Element Not Found.");
    }
}
int binarysearch(int a[], int n, int ele)
{
    int mid, l=0, u=n-1;
    while(l<=u)
    {
        mid = (l + u)/2;
        if(ele == a[mid])
        return mid;
        else if(ele < a[mid])
        u = mid - 1;
        else
        l = mid + 1;
    }
    return l+1;
}