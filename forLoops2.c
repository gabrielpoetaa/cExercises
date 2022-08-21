#include <stdio.h>
#include <stdlib.h>

// 2. Write a C program to find the sum of first 10 natural numbers.



int main()
{
    int index, sum=0;

    printf("The first 10 natural numbers are: ");
    for(index=1; index<=20; index++)
    {
        printf("%d ", index);
        sum = sum + index;

    }

    printf("\nTheir sum is: %d\n", sum);

}
