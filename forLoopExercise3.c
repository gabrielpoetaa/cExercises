#include <stdio.h>
#include <stdlib.h>

// 3. Write a program in C to display n terms of natural number and their sum.

int main()
{
    int num, index, sum=0;

    do
    {
    printf("Choose a number: ");
    scanf(" %d", &num);

        for (index = 1; index<=num; index++)
        {
            sum+=index;
        }

        printf("Their sum is: %d\n", sum);
    }while(num>0);

    return 0;
}
