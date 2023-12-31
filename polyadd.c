#include<stdio.h>
struct poly
{
    int coeff, expo;
};
struct poly p1[10], p2[10], p3[10];
int read(struct poly[]);
int add(struct poly[], struct poly[], int , int , struct poly[]);
void display(struct poly[], int);
int main()
{
    int t1, t2, t3;
    printf("...POLY ADD...\n");
    t1 = read(p1);
    printf("First poly: ");
    display(p1, t1);
    t2 = read(p2);
    printf("Second Poly: ");
    display(p2, t2);
    t3 = add(p1, p2, t1, t2, p3);
    printf("Result= ");
    display(p3, t3);
    return 0;
}
int read(struct poly p[10])
{
    int t1, i;
    printf("Enter the total number of terms: ");
    scanf("%d", &t1);
    printf("Enter the Total number of Coeff and expo.\n");
    for(i=0; i<t1; i++)
    {
        printf("Enter the Number of Coeff %d: ", i);
        scanf("%d", &p[i].coeff);
        printf("Enter the NUmber of Expos %d: ", i);
        scanf("%d", &p[i].expo);
    }
    return(t1);
}
int add(struct poly[10], struct poly[10], int t1, int t2, struct poly[10])
{ 
    int i, j, k;
    i=0, j=0, k=0;
        while(i<t1 && j<t2)
        {
            if(p1[i].expo == p2[j].expo)
            {
                p3[k].coeff = p1[i].coeff + p2[j].coeff;
                p3[k].expo = p1[i].expo;
                i++;
                j++;
                k++;
            }
            else if(p1[i].expo>p2[j].expo)
            {
                p3[k].coeff = p1[i].coeff;
                p3[k].expo = p1[i].expo;
                i++;
                k++;
            }
            else
            {
                p3[k].coeff = p2[j].coeff;
                p3[k].expo = p2[j].expo;
                j++;
                k++;
            }
        }
        while(i<t1)
        {
            p3[k].coeff = p1[i].coeff;
            p3[k].expo = p1[i].expo;
            i++;
            k++;
        }
        while(i<t2)
        {
            p3[k].coeff = p2[j].coeff;
            p3[k].expo = p2[j].expo;
            j++;
            k++;
        }
}
void display(struct poly p[10], int term)
{
    int k;
    for(k=0; k<term-1; k++)
        printf("%dx^%d + ", p[k].coeff, p[k].expo);
    if(p[term-1].coeff!=0)
    {
        if(p[term-1].expo==0)
        printf("%d", p[term-1].coeff);
        else
        printf("%dx^%d", p[term-1].coeff, p[term-1].expo);
    }
    printf("\n");
}