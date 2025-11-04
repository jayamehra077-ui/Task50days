#include<stdio.h>
int main()
{
    int arr[100],i,n;
    printf("enter no. of elements in favonacci series:\n");
    scanf("%d",&n);
    arr[0]=0;
    arr[1]=1;
    for(i=2;i<n-1;i++)
    {
        arr[i]=arr[i-2]+arr[i-1];
    }
    printf("favonacci series:\n");
    for (i=0;i<n-1;i++)
    {
        printf(" %d ",arr[i]);
    }
}