#include <stdio.h>
#include <stdlib.h>

// Prepare an IPO and a flowchart that gets a number N from the user and calculates the following
// Sum of the numbers: 1 + 2 + 3 + 4 + É + N
// Multiplication of the numbers: 1*2*3*4*É*N
// Sum of the squares: 1 + 4 + 9 + 16 + É + N*N
// Sum of the cubes: 1 + 8 + 27 + 64 + É + N*N*N
// Hint: get N and then Use a pretest loop to go through numbers from 1 to N and use proper accumulators to calculate the above


int main()

{
    unsigned Number, index, sum = 0, multiplication = 1, squares = 0, cubes = 0;
    char playAgain;

    do
    {

        printf("\n\nChoose a number");
        printf("\n----------------------------------------------------\n");
        scanf("%d", &Number);
        for (index = 1; index <= Number; index = index + 1)
        {
            sum = sum + index;
            multiplication = multiplication * index; // its only printing when number <= 10, why?
            squares = squares + index * index;
            cubes = cubes + index * index * index;
        }

        printf("\n\nResults:\n");
        printf("1 + 2 + 3 + ... + %d = %d", Number, sum);
        printf("\n1 * 2 * 3 * .... * %d = %d", Number, multiplication);
        printf("\n1 + 4 + 9 + ... + %d = %d" , Number, squares);
        printf("\n1 + 8 + 27 + ... + %d = %d", Number, cubes);
        printf ("\nDo you wanna play again? (Y/N)");
        scanf (" %c", &playAgain);

    }
    while (playAgain != 'N' && playAgain !="n");
        printf("Thanks and bye!");

    // same issue as the guessinGame code, pressing 'n' keeps the code running


}
