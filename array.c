#include<stdio.h>
void main()
{
    int i,n, arr[10];
    printf("Enter the size of array");
    scanf("%d",&n);
    
    printf("Enter the array-----");
    for(i=0;i<n;i++)
    {
        printf("\n Enter the %d element=",i+1);
        scanf("%d",& arr[i]);
    }
    
    
    printf("Sorted array is ---------");
    for (i=0;i<n;i++)
    printf("\t%d",arr[i]);
}
/*
*output
/tmp/KP3jdxl1zd.o
Enter the size of array;5
Enter the array-----
 Enter the 1 element=1
 Enter the 2 element=2
 Enter the 3 element=3
 Enter the 4 element=4
 Enter the 5 element=5
 */
