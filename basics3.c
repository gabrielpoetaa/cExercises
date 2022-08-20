#include <stdio.h>
#include <stdlib.h>

// 3. Write a C program to check two given integers, and return
// true if one of them is 30 or if their sum is 30.
// I implemented a new statement and 'res' variable to this
// exercise.

int main()
{
    int int1, int2, res;
    do
    {
        printf("\nPlease enter two integers: \n");
        scanf("%d %d", &int1, &int2);

        if (int1==30 || int2==30 || int1+int2==30)
        {
            res=int1*int2;
            printf("Congrats, it's true!\n");
            printf("and the magic number is %d", res);
        }

        else
        {
        printf("Hmm false, try it again!\n");
        }
    }
    while (int1!=30 && int2!=30);
    printf("\nThanks and Bye!");

}
