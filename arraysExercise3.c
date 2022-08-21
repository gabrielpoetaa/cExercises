#include <stdio.h>
#include <stdlib.h>

/*

3. Write a program in C to find the sum of all elements of the array. Go to the editor
Test Data :
Input the number of elements to be stored in the array :3
Input 3 elements in the array :
element - 0 : 2
element - 1 : 5
element - 2 : 8
Expected Output :
Sum of all elements stored in the array is : 15

*/


int main()
{
    int arraySize, index, arr[100], sum=0;

    printf("Input the number of elements to be stored in the array: ");
    scanf("%d", &arraySize);

    printf("Input %d elements in the array\n", arraySize);

    for (index = 0; index < arraySize; index++)

    {
        printf("Element %d : ", index);
        scanf("%d",&arr[index]);
    }

    printf("The values store into the array are: ");
    for (index = 0; index < arraySize; index++)
        printf("%5d", arr[index]);

    for (index = 0; index < arraySize; index++)
        sum+= arr[index]; // why the sum is 1 when I just assign sum = arr[index]

    printf("\nTheir sum is: %d", sum);

    return 0;
}
