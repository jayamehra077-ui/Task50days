#include<stdio.h>
#include<conio.h>
int main()
{
    int arr[50];
    int n;
    printf("enter no of elements in array:\n");
    scanf("%d",&n);
    printf("enter elements:\n");
    for(int i=0;i<n;i++)
    {
     scanf("%d",&arr[i]);
    }
     for(int i=0;i<n;i++)
    {
     printf(" %d ",arr[i]);
    }
    printf("\n");
    int sum=0;
    int avg;
    for(int i=0;i<n;i++)
    {
    sum=sum+arr[i];
    avg=sum/n;
    }
    printf("average of elements= %d",avg);
}