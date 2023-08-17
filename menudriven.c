#include<stdio.h>
void main()
{
    int a, b, opt;
    printf("Enter the 2 Elements: ");
    scanf("%d %d", &a, &b);
    printf("MENU\n");
    printf("1. add\n");
    printf("2. sub\n");
    printf("3. div\n");
    printf("Enter Your choice: ");
    scanf("%d", &opt);
    switch(opt)
    {
        case 1:
        printf("Addition is %d.", (a+b));
        break;
        case 2:
        printf("Sub is %d.", (a-b));
        break;
        case 3:
        printf("div is %d.", (a/b));
        break;
        default:
        printf("Invalid Option. ");
        break;
    }  
}