#include <stdio.h>
#include <stdlib.h>

// 4. Write a C program to check a given integer and return
// true if it is within 10 of 100 or 200


int main()
{
    int int1;
    do
    {
        printf("\nEnter an integer and I'll tell you if it's ");
        printf("between 1 and 200\n");
        scanf(" %d", &int1);

        if (int1>0 && int1<=200)
            printf("\nTrue");

        else
            printf("\nWrong, try again plaese.");
            printf("\n====================");

    }
    while(int1==0 || int1>200);


    return 0;
}
