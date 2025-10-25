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
int x;
    //int found_index = -1;
    printf("enter no. to be search:\n");
    scanf("%d",&x);
    int found_index = -1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++){
     if(arr[i][j]==x)
     {
        found_index = i; // Element found, store its index
            break;           
        //printf("Element %d found at index %d.\n", x, i);
     }
    }
}
    if (found_index != -1) {
        printf("Element %d found at index %d.\n", x, found_index);
    }
    else
    {
        printf("Element %d not found in the array.\n", x);
    }
    
    return 0;
    

}