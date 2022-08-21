#include <stdio.h>
#include <stdlib.h>

/*

4. Write a program in C to add two numbers using pointers.
Test Data :
Input the first number : 5
Input the second number : 6
Expected Output :

The sum of the entered numbers is : 11

*/


int main()
{


    int num1, num2, sum;
    int* num1Pointer;
    int* num2Pointer;

    num1Pointer = &num1;
    num2Pointer = &num2;

    printf("Input the first number: ");
    scanf ("%d", &num1);

    printf("Input the second number: ");
    scanf ("%d", &num2);

    printf("The value of the first number is: %d\n", *num1Pointer);
    printf("The value of the second number is: %d\n", *num2Pointer);

    sum = *num1Pointer + *num2Pointer;

    printf("Their sum is: %d", sum);


/*
    sumPointer = num1Pointer + num2Pointer;

    printf("The sum of the entered numbers is: %d", *sumPointer);

    */


    return 0;
}
