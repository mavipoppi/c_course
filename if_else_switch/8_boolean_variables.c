/*Let's generate a table of prime numbers! 

If you have the task of generating all prime numbers up to 50, for example, the most straightforward algorithm to generate such a table is simply to test each integer p for divisibility by all integers from 2 through p-1. If any such integer evenly divided p, then p is not prime; otherwise, it is a prime number.*/

#include <stdio.h>

// int main (void)
// {
//     int p, d;
//     _Bool isPrime;

//     for (p = 2; p <= 50; ++p)
//     {
//         isPrime = 1;

//         for (d = 2; d < p; ++d)
//         {
//             if (p % d == 0)
//             {
//                 isPrime = 0;
//             }
//             if (isPrime != 0)
//             {
//                 printf("%i ", p);
//             }
//         }
//     }

//     printf("\n");
// }

/*The outermost for statement sets up a loop to cycle through the integers 2 through 50.The loop variable p represents the value you are currently testing to see if it is prime.The first statement in the loop assigns the value 1 to the variable isPrime.

A second loop is set up to divide p by the integers from 2 through p-1. Inside the loop, a test is made to see if the remainder of p divided by d is 0. If it is, you know that p cannot be prime. To signal that p is no longer a candidate as a prime number, the value of the variable isPrime is set equal to zero. 

When the innermost loop finishes execution, the value of isPrime is tested. If it is not equal to zero, no integer was found that evenly divides p, so p must be a prime number and its value is displayed. 


We declare isPrime to be a _bool since it takes on either the value 0 or 1. Its value is 1 as long as p still qualifies as a prime number. But as soon as a single even divisor is found, its value is set to 0 to indicate that p no longes satisfies the criteria for being prime. Those variables are referred to as flags. The value of a flag is usually tested at least once in the program to see if it is "on" (TRUE) or "off" (FALSE), and some particular action is taken based upon the results of the test.

For example, 

if (number < 0)
{
    number = -number;
}

actually proceeds as follows: 

1. The relation expression number < 0 is evaluated. If the condition is satisfied, that is, if number is less than zero, the value of the expression is 1; otherwise, its value is 0.

2. The if statement tests the result of the expression evaluation. If the result is nonzero, the statement that immediately follows is executed; otherwis,e the statement is skipped.

The preceding discussion also applies to evaluation of conditiions inside the for, while and do statements.

Now, we'll be revising the program to generate a table of prime numbers: 
*/

#include <stdbool.h> 

int main(void)
{
    int p, d;
    bool isPrime;

    for (p = 2; p <= 50; ++p)
    {
        isPrime = true;

        for (d = 2; d < p; ++d)
        {
            if (p % d == 0)
            {
                isPrime = false; 
            }
            if (isPrime != false)
            {
                printf("%i ", p);
            }
        }
    }
    printf("\n");
}