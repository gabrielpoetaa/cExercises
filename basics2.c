#include <stdio.h>
#include <stdlib.h>

// 2. Write a C program to get the absolute difference between
// n and 51. If n is greater than 51 return triple the absolute
// difference.

int main()
{
    int number, res;
    char playAgain;
do
{
    printf("\nChoose a number: ");
    scanf("%d", &number);

    if (number>51)
    res = number*number*number;

    else
    res = 51 - number;

    printf ("\nThe result is: %d", res);
    printf("\n====================");
    printf("\nDo you want to play it again? (Y/N)");
    scanf(" %c", &playAgain);

    } while (playAgain !='N' && playAgain !='n');

    printf("\nThanks and Bye!\n");
    printf("\n====================");
}

