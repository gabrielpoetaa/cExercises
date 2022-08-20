#include <stdio.h>
#include <stdlib.h>

// 1. Write a C program to compute the sum of the two given
// integer values. If the two values are the same, then
// return triple their sum

int main()
{
    int num1, num2, sum;
    char playAgain;

    do
    {
        printf("\nPlease type two integer values: \n");
        scanf(" %d  %d", &num1, &num2);
    if (num1==num2)
        sum=num1*num1*num1;
    else
        sum=num1+num2;

        printf("\nTheir sum is: %d\n", sum);
        printf("====================");
        printf("\nDo you want to play it again? (Y/N)");
        scanf(" %c", &playAgain);
    }while(playAgain!='N' && playAgain!='n');

        printf("Thanks and bye!");

    return 0;
}
