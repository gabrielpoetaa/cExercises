#include <stdio.h>
#include <stdlib.h>

// 7. Write a C program to check two given integers whether
// either of them is in the range 100..200 inclusive

int main()
{
    int num1, num2;
    char playAgain;

    do
    {
        printf("==================================\n");
        printf("Please enter two integers and I'll tell you whether either of them is in the range 100-200:\n");
        scanf("%d %d", &num1, &num2);

        if (num1>=100 && num1<=200 || num2>=100 && num2<=200)
        {
            printf("One of the numbers you entered is between 100 and 200\n");
            printf("Do you want to play it again? (Y/N)");
            scanf(" %c", &playAgain);
        }
        else
            printf("Try it again. ");
    }
    while (num1>=100 | num1<=200 | num2>=100 | num2<=200 && playAgain !='N' && playAgain !='n');
    printf("Thanks and Bye!");

    return 0;
}
