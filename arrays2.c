#include <stdio.h>
#include <stdlib.h>

/*

2. Write a program in C to read n number of values in an array and display it in reverse order.
Test Data :
Input the number of elements to store in the array :3
Input 3 number of elements in the array :
element - 0 : 2
element - 1 : 5
element - 2 : 7
Expected Output :
The values store into the array are :
2 5 7
The values store into the array in reverse are :
7 5 2

*/

int main()
{
    int index, arraySize, arr[100];

    printf("Input the number of elements to store in the array: ");
    scanf("%d", &arraySize);

    printf("Input %d elements in the array:\n", arraySize);
    for (index = 0; index < arraySize; index = index +1)
    {
        printf("Element %d: ", index);
        scanf("%d", &arr[index]); // here comes whatever the user input
    }

    printf("The elements in this array are: ");
    for (index = 0; index < arraySize; index = index + 1)

    {
        printf("%2d", arr[index]);
    }

    printf("\nThe elements in this array in a reverse order are: ");
    for (index = arraySize -1; index>=0; index = index - 1) // why the index >=0 ?
    {
        printf("%2d", arr[index]);
    }


    /*

    for (index = 0; index < arraySize; index = index +1)

    {
        printf("%d", arr[arraySize]);
    }

    */

    return 0;
}
