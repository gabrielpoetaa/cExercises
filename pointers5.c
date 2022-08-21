#include <stdio.h>
#include <stdlib.h>

/*

5. Write a program in C to add numbers using call by reference.

Test Data :
Input the first number : 5
Input the second number : 6
Expected Output :

 The sum of 5 and 6  is 11

 */



int main()
{

    int num1, num2, sum;
    int* num1Pointer;
    int* num2Pointer;

    num1Pointer = &num1;
    num2Pointer = &num2;


    printf("Input the first number: ");
    scanf("%d", &num1);

    printf("Input the second number: ");
    scanf("%d", &num2);

    sum = *num1Pointer + *num2Pointer;

    printf("\nThe sum of %d and %d is: %d", num1, num2, sum);



    return 0;
}
