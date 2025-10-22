#include<stdio.h>
#include<conio.h>
int main()
{
    int arr1[50],arr2[50];
    int n,m;
    printf("enter no of elements in first array:\n");
    scanf("%d",&n);
    printf("enter elements:\n");
    for(int i=0;i<n;i++)
    {
     scanf("%d",&arr1[i]);
    }
     for(int i=0;i<n;i++)
    {
     printf(" %d ",arr1[i]);
    }
    printf("\n");
    printf("enter no of elements in second array:\n");
    scanf("%d",&m);
    printf("enter elements:\n");
    for(int i=0;i<m;i++)
    {
     scanf("%d",&arr2[i]);
    }
     for(int i=0;i<m;i++)
    {
     printf(" %d ",arr2[i]);
    }
    printf("\n");
    printf("sum of two arrays:\n");
    int arr3[50];
    for(int i=0;i<n;i++)
    {
        arr3[i]=arr1[i]-arr2[i];
    }
    for(int i=0;i<n;i++)
    {
     printf(" %d ",arr3[i]);
    }
}