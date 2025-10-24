#include<stdio.h>
#include<conio.h>
int main()
{
 int arr[50][50],m,n=0;
 printf("enter no of rows:\n");
 scanf("%d",&m);
 printf("enter no of columns:\n");
 scanf("%d",&n);
 printf("enter elements:\n");
 for(int i=0;i<m;i++)
 {
   for(int j=0;j<n;j++)
   {
printf("ELEMENT arr[%d][%d]:",i,j);
scanf("%d",&arr[i][j]);
   } 
 }
 for(int i=0;i<m;i++)
 {
   for(int j=0;j<n;j++)
   {
//printf("ELEMENT arr[%d][%d]:",i,j);
printf(" %d ",arr[i][j]);
   } 
   printf(" \n ");
 }


    int x=m*n;
    int a1[x];
    int k=0;
    printf("converted into 1D aaray:\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            a1[k]=arr[i][j];
            k++;
        }
    }
    
    for(int k=0;k<x;k++)
    {
   // printf("converted into 1D array:\n");
    printf("%d ",a1[k]);
    }

}