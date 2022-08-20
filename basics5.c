#include <stdio.h>
#include <stdlib.h>

// Write a C program to check whether a given positive number
// is a multiple of 3 or a multiple of 7.

int main()
{
    int num1;
    char playAgain;

    do
    {
        printf("\nEnter a integer number");
        printf(" and I'll tell you if its a multiple of 3 or 7\n");
        scanf("%d", &num1);

        if(num1%3==0 || num1%7==0)
            printf("That's right!");
        else
        {
            printf("\nThe number you entered is neither a multiple of");
            printf(" 3 or 7.");
        }
        printf("\nDo you want to try it again? (Y/N)");
        scanf (" %c", &playAgain);

    }
    while(playAgain!='N' && playAgain!='n');
    printf("Thanks and Bye!");

}
