#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/*

1. Write a program in C to input a string and print it.

Test Data :
Input the string : Welcome, w3resource

Expected Output :

The string you entered is : Welcome, w3res

*/


int main()
{
    char str[100];

    printf("Input the string: ");
    fgets(str, 100, stdin);

    printf("The string you entered is:\n");
    printf("%s", str);

    return 0;
}
