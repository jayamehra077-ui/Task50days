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
    int x;
    //int found_index = -1;
    printf("enter no. to be search:\n");
    scanf("%d",&x);
    int found_index = -1;
    for(int i=0;i<n;i++)
    {
     if(arr[i]==x)
     {
        found_index = i; // Element found, store its index
            break;           
        //printf("Element %d found at index %d.\n", x, i);
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