#include <stdio.h>
int main ()
{ 
    int arr[20],size,i, j,temp;
    printf("Enter the size of array ");
    scanf("%d",&size);
    printf("Enter the elements of array------");
    for(i=0;i<size;i++)
    {
        printf("\n Array in  %d element",i+1);
        scanf("%d", &arr[i]);
   
    }
    
    
     printf("/n sortedf array is------");
    for (i=0;i<size;i++)
    printf("\t%d",arr[i]);
    return 0;
    }
/*
Enter the size of array 3
Enter the elements of array------
 Array in  1 element2
 Array in  2 element4
 Array in  3 element3
 /n sortedf array is------/2/4/3
*/
