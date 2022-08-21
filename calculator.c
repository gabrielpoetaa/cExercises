#include <stdio.h>
#include <stdlib.h>

int main()
{

    do
    {


        char choice;
        int number1, number2;
        int sum = number1 + number2;
        int subtraction = number1 - number2;
        int multiplication = number1 * number2;
        float division = number1 / number2;


        printf ("Enter an operation.\n");
        printf ("A for add, S for subtract, M for multiply and D for divide.\n");
        scanf(" %c", &choice);
        if (choice != 'A')
            printf ("Try again!");

        else
        {

            printf ("Enter two numbers ");
            scanf (" %d %d", &number1, &number2);

            switch(choice)
            {
            case 'A':
            case 'a':
                sum = number1 + number2;
                printf ("Their sum is: %d\n", sum);
                break;

            case 'S':
            case 's':
                subtraction = number1 - number2;
                printf ("Their subtraction is: %d\n", subtraction);
                break;

            case 'M':
            case 'm':
                multiplication = number1 * number2;
                printf ("Their multiplication is: %d\n", multiplication);
                break;

            case 'D':
            case 'd':
                division = number1 / number2;
                printf ("Their division is: %.2f\n", division);
                break;

            default:
                printf ("Invalid input, try again!");
            }
        }
        while (choice == 'A' || choice == 'S' || choice =='M' || choice =='D');
        return 0;
    }
