#include <stdio.h>
#include <stdlib.h>

// Print the integers from 1 to 20 using a while loop and the
// counter variable x. Print only five integers per line.
// [Hint: Use the calculation x%5. When the value of this is 0,
// print a newline character, otherwise print a tab character].

int main()
{

    int x = 1 , count = 5;

    while ( x<= 20 )
    {
        if (x == '5' || x == '10' || x == '15' || x == '20')
            printf ("\n");
        else
        printf ("%d\n", x);
        x = x + 1;

    }


}
