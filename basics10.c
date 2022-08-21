#include <stdio.h>
#include <stdlib.h>
// Print the value 333.546372 in a field width of 15 characters
//with precisions of 1, 2, 3, 4, and 5. Left justify the output
// What are the five values that print?

int main()
{

    printf("The value is: %-15.1f", 333.546372);
    printf("\nThe value is: %-15.2f", 333.546372);
    printf("\nThe value is: %-15.3f", 333.546372);
    printf("\nThe value is: %-15.4f", 333.546372);
    printf("\nThe value is: %-15.5f\n", 333.546372);

    return 0;
}
