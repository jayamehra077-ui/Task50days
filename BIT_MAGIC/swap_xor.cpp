#include<stdio.h>
int main()
{
    int x,y;
    printf("enter 1st num. : ");
    scanf("%d",&x);
    printf("\n");
    printf("enter 2nd num. : ");
    scanf("%d",&y);
    printf("X= %d and Y = %d ",x,y);
    x=x^y;
    y=x^y;
    x=x^y;
    printf("\n");
    printf("after swapping:\n");
    printf("X= %d and Y = %d ",x,y);
}