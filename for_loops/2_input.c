/*Getting an input from the user*/

#include <stdio.h>

int main(void)
{
    int n, number, triangular_number;

    printf("What triangular number do you want? ");
    scanf("%i", &number);

    triangular_number = 0;

    for (n = 1; n <= number; ++n)
    {
        triangular_number += n;

    }
    
    printf("Triangular number %i is %i.\n", number, triangular_number);
}

/*The first argument to scanf is the format. The second argument specifies where the value that is typed in by the use is to be stored (don't forget the &).*/