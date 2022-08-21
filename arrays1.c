#include <stdio.h>
#include <stdlib.h>

/*

1. Write a program in C to store elements in an array and print it
Test Data :
Input 10 elements in the array :
element - 0 : 1
element - 1 : 1
element - 2 : 2

*/

int main()
{

    int arr[11];
    int i;
    printf("\n\nRead and Print elements of an array:\n");
    printf("-----------------------------------------\n");

    printf("Input 10 elements in the array :\n");
    for(i=1; i<11; i++)
    {
        printf("element - %d : ",i);
        scanf("%d", &arr[i]);
    }

    printf("\nElements in array are: ");
    for(i=1; i<11; i++)
    {
        printf("%d  ", arr[i]);
    }
    printf("\n");

    return 0;

}








