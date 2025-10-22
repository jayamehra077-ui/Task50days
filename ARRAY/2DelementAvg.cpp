#include<stdio.h>
#include<conio.h>
int main()
{
 int arr[50][50],m,n=0,sum=0,avg;
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
 printf("Average of elements:\n");
 for(int i=0;i<m;i++)
 {
   for(int j=0;j<n;j++)
   {int x=m*n;
    sum=sum+arr[i][j];
    avg=sum/x;
//printf("ELEMENT arr[%d][%d]:",i,j);
//scanf("%d",&arr[i][j]);
   
   } 
 }
 //printf("%d",sum);
printf("%d",avg);
}