#include<stdio.h>
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
    printf("spiral elements:\n");
     int top=0;
    int bottom=n-1;
    int right=m-1;
    int left=0;
    while(top<=bottom && left<=right)
    {
    for(int i=left;i<=right;i++)
    {
        printf("%d ",arr[top][i]);
    }
    top++;
    /*if(top>bottom)
    {
        break;
    }*/
    for(int i=top;i<=bottom;i++)
    {
               printf("%d ",arr[i][right]);
 
    }
    right--;
    for(int i=right;i>=left;i--)
    {
                printf("%d ",arr[bottom][i]);

    }
    bottom--;
    for(int i=bottom;i>=top;i--)
    {
     printf("%d ",arr[i][left]);

    }
    left--;
    for(int i=1;i<2;i++)
    {
        printf("%d ",arr[1][i]);
    }
    return 0;

}
}