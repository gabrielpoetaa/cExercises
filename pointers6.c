#include <stdio.h>
#include <stdlib.h>

int main()
{

    int num1, num2, dif1, dif2;
    int* num1Pointer;
    int* num2Pointer;

    num1Pointer = &num1;
    num2Pointer = &num2;

    do
    {
        printf("\nInput the first number: " );
        scanf ("%d", &num1);

        printf("Input the second number: ");
        scanf("%d", &num2);


        if (*num1Pointer>*num2Pointer)
        {
            printf("The first input is the maximum number");
        }

        else if (*num2Pointer>*num1Pointer)

            printf("The second input is the maximum number");

    } while (num1 > 0 && num2 > 0);




    return 0;


}
