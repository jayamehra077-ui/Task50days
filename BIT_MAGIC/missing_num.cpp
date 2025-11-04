#include<stdio.h>
int main()
{
    int arr[20],i,n,x=0,y=0;
    printf("enter no. of emenents in array:\n");
    scanf("%d",&n);
    printf("enter sorted elements from 0 in which one no. is lost :\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    printf("\n");
    for(i=0;i<n;i++)
    {
      x=x^i;
    }
    for(i=0;i<n-1;i++)
    {
      y=y^i;
    }
    printf("missing no. is= %d ",x^y);
}