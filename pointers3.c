#include <stdio.h>
#include <stdlib.h>

/*

3. Write a program in C to demonstrate the use of &(address of) and *(value at address) operator.
Expected Output :

Pointer : Demonstrate the use of & and * operator :
--------------------------------------------------------
 m = 300
 fx = 300.600006
 cht = z

 Using & operator :
-----------------------
 address of m = 0x7ffda2eeeec8
 address of fx = 0x7ffda2eeeecc
 address of cht = 0x7ffda2eeeec7

 Using & and * operator :
-----------------------------
 value at address of m = 300
 value at address of fx = 300.600006
 value at address of cht = z

Using only pointer variable :
----------------------------------
 address of m = 0x7ffda2eeeec8
 address of fx = 0x7ffda2eeeecc
 address of cht = 0x7ffda2eeeec7

 Using only pointer operator :
----------------------------------
 value at address of m = 300
 value at address of fx= 300.600006
 value at address of cht= z

 */



int main()
{
    int m = 300;
    float fx = 300.600006;
    char cht = 'z';

    int* mPointer;
    float* fxPointer;
    char* chtPointer;

    mPointer = &m;
    fxPointer = &fx;
    chtPointer = &cht;

    printf("\nUsing & Operator\n");
    printf("-----------------------\n");
    printf("Address of m = %d\n", &m);
    printf("Address of fx = %d\n", &fx);
    printf("address of cht = %d\n", &cht);

    printf("\nUsing & and * Operator\n");
    printf("-----------------------\n");
    printf("Value at address of m = %d\n", m);
    printf("Value at address of fx= %f\n", fx);
    printf("Value at address of cht = %c\n", cht);

    printf("\nUsing only pointer variable\n");
    printf("-----------------------\n");
    printf("Address of m = %d\n", mPointer);
    printf("Address of fx = %d\n", fxPointer);
    printf("address of cht = %d\n", chtPointer);

    printf("\nUsing only pointer operator\n");
    printf("-----------------------\n");
    printf("Value at address of m = %d\n", *mPointer);
    printf("Value at address of fx= %f\n", *fxPointer);
    printf("Value at address of cht = %c\n", *chtPointer);


    return 0;
}
