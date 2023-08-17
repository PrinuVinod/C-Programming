#include<stdio.h>
void main()
{
    int p, i, j, r, avail[30], need[30][10], alloc[30][10], max[30][10];
    printf("Enter The Number Of Process: ");
    scanf("%d", &p);
    printf("Enter The Number Of Resources: ");
    scanf("%d", &r);
    for(i=0; i<p; i++)
    {
        printf("Enter Allocation for Process: ");
        for(j=0; j<r; j++)
        {
            scanf("%d", &alloc[i][j]);
        }
        printf("Enter Max Allocation for Process: ");
        for(j=0; j<r; j++)
        {
            scanf("%d", &max[i][j]);
        }
        for(j=0; j<r; j++)
        need[i][j] = max[i][j] - alloc[i][j];
    }
    printf("Enter The Available Resources: ");
    for(i=0; i<r; i++)
    scanf("%d", avail[i]);
    printf("Process\tMax\tAllocated\tNeed");
    for(i=0; i<p; i++)

    {
        printf("%d\t", i+1);
        for(j=0; j<r; j++)
        {
            printf("%d", max[i][j]);
        }
        printf("\t");
        for(j=0; j<r; j++)
        {
            printf("%d", alloc[i][j]);
        }
        printf("\t");
        for(j=0; j<r; j++)
        {
            printf("%d", need[i][j]);
        }
    }
}