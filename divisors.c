// Develop a C code using modulo operator (%) to print
// out all the divisors of a user entered number.
// Your program should prompt the user to enter a positive
// number or 0 to end. Using a loop variable that starts at 1,
// your program should print out all the divisors of the
// entered number plus the number of printed divisors and
// their sum.


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, index;

    do
    {
        printf("\nEnter an integer\n");
        scanf ("%d", &x);

        printf("All the divisors of %d are: " , x);

        for (index = 1; index <= x; index = index +1)
            if (x%index == 0) // here we're CHECKING all the numbers that can divide 'x' (userInput)
            { // any number that doesnt satisfy the above condition will not be printed.
                printf ("%d ", index); // here we're PRINTING the numbers that can divide 'x' (userInput)
            }

    }
    while (x !=0);

// COULDN'T PRINT THE SUM OF THE PRINTED DIVIDERS.

}
