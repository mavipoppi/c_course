#include <stdio.h>

/*1) Write a program that asks the user to type in two integer values at the terminal. Test these two numbers to determine if the first is evenly divisible by the second, and then display an appropriate message at the terminal.*/

int main(void)
{
    int x, y;

    printf("Type in two integer numbers: ");
    scanf("%i %i", &x, &y);

    if (y == 0)
    {
        printf("Division by zero.\n");
    }
    else if (x % y == 0)
    {
        printf("x is equally divisible by y.\n");
    }
    else if (x %  y != 0)
    {
        printf("x is not equally divisible by y.\n");
    }
}

/*--------------------------------------------------------------------------------------------------------------------------------*/

/*2) Write a program that accepts two integer values typed in by the user. Display thhe result of dividing the first integer by the second, to three-decimal-place accuracu. Remember to have the program check for division by zero.*/

// int main(void)
// {
//     int x, y;
//     float z;

//     printf("Type in two integer numbers: ");
//     scanf("%i %i", &x, &y);

//     if (y == 0)
//     {
//         printf("Division by zero.\n");
//     }
//     else
//     {
//         z = (float) x / (float) y;
    
//         printf("The result of %i / %i is %.3f.\n", x, y, z);

//     }
// }

/*--------------------------------------------------------------------------------------------------------------------------------*/

/*3) Write a program that acts as a simple "printing" calculator. The program shoould allow the user to type in expressions of the form

number   operator

The following operators should be recognized by the program: 

+   -   *   /   S   E

The S operator tells the program to set the "accumulator" to the typed-in number. the E operator tells the program that execution is to end. The arithmetic operations are performed on the contents of the accumulator with the number that was keyed in acting as the second operand. Make certain that the program detects division by zero and also checks for
unknown operators.*/

// int main(void)
// {
    // define variables and operators

    // char S, /, -, *, +, E;
    // double value;

    /*Building a sketch:
    
    1. print "Enter the initial value of the operand + 'S' to begin the calculations."
    2. save the operand value in a new variable 'value'. 
    3. ask for a new operand value and an operator (+, -, /, *, S, E). 
    4. if the operator entered is
        + : add the previous value of 'value1' with the new given number and replace in the variable 'value1' again.
        - : subtract the given number from the previous value of 'value' and store it in the variable 'value1' again.
        / : divide the value of 'value1' by the given number and store the result in the variable 'value1' again.
            if the given operand is 0, ask for new input.
        * : multiply the value of 'value1' by the given number and store the result in the variable 'value1' again.
        S : assign to 'value1' the number given by the user.
        E: stop the calculations and exit the program.
    5. If the given operator is a character different from the pre-established ones, display an error message and request a new operator.

    */
// }

/*--------------------------------------------------------------------------------------------------------------------------------*/

/*4) Write a program that takes an integer keyed in from the terminal and extracts and displays each digit of the integer in English. So, if the user types in 932, the program should display 'nine three two'. Remember to display 'zero' if the user types in 0.

Building a sketch: 

1. Ask for user input. 
2. Store the value given in the 'number' variable. 
3. Find an efficient way to divide the characters of the given number and analyze which number represents each of them. If the character representing the parsed input is
    0 : print 'zero'
    1 : print 'one'
    2 : print 'two'
    ...
4. At the end, print the number in English referring to each of the characters that make up the entire number given by the user at the beginning.
*/

/*--------------------------------------------------------------------------------------------------------------------------------*/

/*5) Program 6.10 has several inefficiencies. One inefficiency results from checking even numbers. Because it is obvious that any even number greater than 2 cannot be prime, the program could simply skip all even numbers as possible primes and as possible divisors.The inner for loop is also inefficient because the value of p is always divided by all values of d from 2 through p–1.This inefficiency could be avoided by adding a test for the value of isPrime in the conditions of the for loop. In this manner, the for loop could be set up to continue as long as no divisor was found and the value of d was less than p. Modify  Program 6.10 to incorporate these two changes.Then run the program to verify its operation. (Note: In Chapter 7, you discover even more efficient ways of generating prime numbers.)

Remembering the program:

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

*/

/*--------------------------------------------------------------------------------------------------------------------------------*/