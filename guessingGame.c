#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned hi = 101, lo = 1, guess;
    char resp = 'N', emptyBuffer, playAgain;

    do{

    resp= 'N';
    lo = 1;
    hi = 101;
    printf ("\n\nChoose a number and I will guess");
    printf("\n----------------------------------------------------\n");
    while (resp != 'C' && resp != 'c')
    {
        guess = (hi + lo) /2;
        printf ("My guess is %d. \nIs my guess High or Low or Correct. (H for High, L for Low, C for Correct)", guess);
        scanf ("%c", &resp);
        scanf("%c", &emptyBuffer);
        if (resp == 'L' || resp == 'l' )
            lo = guess;
        else if (resp == 'H' || resp == 'h' )
            hi = guess;
    }

    printf ("I found your guess! It is: %d", guess);
    printf ("\nDo you wanna play again? (Y/N)");
    scanf ("%c", &playAgain);
    scanf("%c", &emptyBuffer);

    }while (playAgain !='N' && playAgain !='n');
// it doesn't end if the user presses 'n', only if he presses 'N'

}
