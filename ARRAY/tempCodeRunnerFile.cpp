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
     printf("diagonal elements are:\n");
    for(int i=0;i<m;i++)
    {
        printf("%d ",arr[i][i]);
    }
   // for(int i=0;i<n;i++)
   // {
     //   printf("%d ",arr[i][n-i-1]);
    //}


}