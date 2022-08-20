#include <stdio.h>
#include <stdlib.h>

// 6. Write a C program to check whether given temperatures
// is less than 0 and the other is greater than 100

int main()
{
    float temp1, temp2;


    do
    {
    printf("\nGive me two temperatures and I'll tell you if the ");
    printf("first is less than zero and the other is");
    printf(" greater than 100\n");
    scanf("%f %f", &temp1, &temp2);

        if (temp1<0)
            printf ("\n%.2f is less than zero", temp1);

        if(temp1>0)
            printf ("\n%.2f is greater than zero", temp1);

        if(temp2<100)
            printf ("\n%.2f is less than 100\n", temp2);

        if(temp2>100)
            printf ("\n%.2f is greater than 100\n", temp2);
    }
    while (temp1 <= 0 || temp1 >0 || temp1 <=0 || temp2>0);


    /* if (temp1<0)
        printf ("\n%.2f is less than zero", temp1);
    else
        if (temp1>0)
        printf ("\n%.2f is greater than zero", temp1);
    else
        if (temp2<100)
        printf ("\n%.2f is less than 100", temp2);
    else
        if (temp2>100)
        printf ("\n%.2f is greater than 100", temp2);
    */
    return 0;
}
