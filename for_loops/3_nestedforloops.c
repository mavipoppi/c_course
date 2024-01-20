#include <stdio.h>

/* Calculating the values of triangular numbers from 5 different user inputs. */
int main(void)
{
    int n, number, triangular_number, counter;

    for (counter = 1; counter <= 5; ++counter)
    {
        printf("What triangular number do you want? ");
        scanf("%i", &number);

        triangular_number = 0;

        for (n = 1; n <= number; ++n)
        {
            triangular_number += n;
        }
        
        printf("Triangular number %i is %i \n\n", number, triangular_number);
    }
}

/*The program consists of two levels of for statements. The outermost for(counter = 1; counter <= 5; ++counter) specifies that the program loop is going to be executed five times.

For 5 times
{
    Get the number from the user. 

    Calculate the requested triangular number.

    Display the result. 
}

*/