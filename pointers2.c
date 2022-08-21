#include <stdio.h>
#include <stdlib.h>

/*

2. Write a program in C to demonstrate how to handle the pointers in the program.

Expected Output :

 Address of m : 0x7ffcc3ad291c
 Value of m : 29

 Now ab is assigned with the address of m.
 Address of pointer ab : 0x7ffcc3ad291c
 Content of pointer ab : 29

 The value of m assigned to 34 now.
 Address of pointer ab : 0x7ffcc3ad291c
 Content of pointer ab : 34

 The pointer variable ab is assigned with the value 7 now.
 Address of m : 0x7ffcc3ad291c
 Value of m : 7

 */


int main()
{

    int m = 29;
    int* ab;

    //Now ab is assigned with the address of m.

    ab = &m;

    printf("Address of pointer ab: %d\n", ab);
    printf("Content of pointer ab: %d\n", *ab);

    // The value of m assigned to 34 now.

    m=34;

    printf("Addres of pointer ab: %d\n", ab);
    printf("Content of pointer ab: %d\n", *ab);

    // The pointer variable ab is assigned with the value 7 now.

    *ab=7;

    printf("Address of m: %d\n", &m);
    printf("Value of m: %d\n", m);

    /*

    printf("Address of m: %d\n", ab);
    printf("Value of m: %d\n", *ab);

    Could've done this way?

    */

    return 0;
    }
