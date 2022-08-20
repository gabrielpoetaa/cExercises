#include <stdio.h>
#include <stdlib.h>

// Write a C program to check which number nearest to the
// value 100 among two given integers. Return 0 if the two
// numbers are equal.

int main()
{
    int num1, num2, n=100, dif1, dif2;

    do
    {
        printf("\nChoose two integer numbers. \n");
        scanf("%d %d", &num1, &num2);

        dif1 = n - num1;
        dif2 = n - num2;

        if (dif1>dif2)
            printf("%d is nearer to 100 than %d", num2, num1);

        else if (dif2>dif1)
            printf("%d is nearer to 100 than %d", num1, num2);

        else if (num1 == num2)
            printf("\nPlease try again.");

    }while(num1==num2 || dif1>dif2 || dif2>dif1);

    return 0;
}
