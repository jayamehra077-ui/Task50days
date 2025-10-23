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
 printf("Even Numbers Are:\n");
for(int i=0;i<m;i++)
 {
   for(int j=0;j<n;j++)
   {
    if(arr[i][j]%2!=0)
    {
        printf(" %d ",arr[i][j]);
    }
   } 
 
 }

}