#include<stdio.h>
int main ()
{
    int array[100],i,j,n;
    printf("Enter the number of array element");
    scanf("%d",&n);
    printf("Enter he unsorted array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("your given unsorted array");
    for (i=0;i<n;i++)
    {
        printf("%d ",array[i]);
    }
    
    return 0;

}