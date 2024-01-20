/*THIS CODE CALCULATES TRIANGULAR NUMBERS BY VARIOUS METHODS, FROM THE SIMPLE TO THE MOST COMPLEX. TO RUN THEM, JUST TAKE THE COMMENTS FROM THE DESIRED PART.*/


// Program to calculate the eight triangular number

#include <stdio.h>

int main(void)
{
    int triangular_number;

    triangular_number = 1 + 2 + 3 + 4 + 5 + 6 + 7 + 8;

    printf("The eight triangular number is %i\n", triangular_number);
}

// --------------------------------------------------------------------------------------------------------

/*Making a table that displays the values of triangular numbers.*/

// int main(void)
// {
//     int n, triangular_number;

//     printf("Table of triangular numbers\n\n");
//     printf(" n  |  Sum from 1 to n\n");
//     printf("-----------------------\n");

//     triangular_number = 0;

//     for (n = 1; n <= 10; ++n)
//     {
//         triangular_number += n;
//         printf(" %i           %i\n", n, triangular_number);
//     }

// }

//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

// Program to calculate the 200th triangular number. Introduction of the for statement.

// #include <stdio.h>

// int main(void)
// { 
//     int n, triangular_number;

//     triangular_number = 0; // initial value for triangular_number.

//     for (n = 1; n <= 200; n = n + 1) // n starts at 1, goes to n less than or equal to 200 (condition necessary for the loop to continue) and evolves as n = n + 1.
//         triangular_number = triangular_number + n; // the new value for triangular_number is triangular_number + n. This will go on till n reaches its final number (200).

//     printf("The 200th triangular number is %i\n", triangular_number);
// }

/*  The general format of the for statement is: 

for (init_expression; loop_condition; loop_expression)
    program statement

the statement that constitutes the body of the loop is executed as many times as specified by the parameter set up in the for statement - will be executed as long as the result of the relational test is TRUE (see relational_operators).

When the loop_condition is no longer satisfied, the execution of the program continues with the program statement immediately following the for loop. In this case, it will continues with the printf statement.


    In summary, the execution of the for statement proceed as follows: 

1) The initial expression is evaluated first. This expression usually sets a variable that  will be used inside the loop, generally referred to as an index variable, to some initial value such as 0 or 1. 

2) The looping condition is evaluated. If the condition is not satisfied (the expression is FALSE), the loop is immediately terminated. Execution continues with the program statement that immediately follows the loop.

3) The program statement that constitutes the body of the loop is executed.

4) The looping expression is evaluated. This expression is generally used to change the value of the index variable, frequently by adding 1 to it or subtracting 1 from it.

5) Return to step 2. */
