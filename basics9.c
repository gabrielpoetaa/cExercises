#include <stdio.h>
#include <stdlib.h>

// Sum the odd integers between 1 and 99 using a for statement.
// Use the unsigned integer variables sum and count

int main()
{
    unsigned sum = 0;
    for (unsigned int count = 1; count <= 99; count += 2)
    {
        sum += count;
    }

}
