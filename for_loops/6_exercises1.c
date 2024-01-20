// Note: the codes for each exercise will be kept commented. Take comments one at a time to make them work.

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/*1) Write a program to display the first 10 natural numbers.*/

// int main(void)
// {
//     int i;

//     printf("The first 10 natural numbers are:\n");

//     for (i = 1; i <= 10; i++)
//     {
//         printf("%d ", i);
//     }

//     printf("\n");
// }

// -----------------------------------------------------------------------------------------------------------

/*2) Write a C program to compute the sum of the first 10 natural numbers.*/

// int main(void)
// {
//     int i, sum = 0;

//     printf("The first 10 natural numbers are: ");

//     for (i = 1; i <= 10; i++)
//     {
//         sum = sum + i;
//         printf("%d ", i);
//     }

//     printf("\nThe sum is: %i.\n", sum);
// }

// -----------------------------------------------------------------------------------------------------------

/*3) Write a program to display n terms of natural number and their sum.*/

// int main(void)
// {
//     int i, j, sum = 0; 

//     printf("Test data: ");
//     scanf("%d", &i);

//     for (j = 1; j <= i; j++)
//     {
//         sum = sum + j;
//     }

//     printf("The sum of the first %d numbers is: %d.\n", i, sum);
// }

// -----------------------------------------------------------------------------------------------------------

/*4) Write a program to display the cube of the number up to an integer.*/

// int main(void)
// {
//     int i, terms, triple; 

//     printf("Input number of terms: " );
//     scanf("%d", &terms);

//     for (i = 1; i <= terms; i++)
//     {
//         triple = i*i*i;
//         printf("Triple the number %i is %i.\n", i, triple);
//     }
// }

// -----------------------------------------------------------------------------------------------------------

/*5) Write a program to display the multiplication table for a given integer.*/

// int main(void)
// {
//     int i, j, mult;

//     printf("Number: ");
//     scanf("%d", &i);

//     printf("Multiplication table for the number %i", i);

//     for (j = 0; j <= 10; j++)
//     {
//         mult = i * j;
//         printf("%i\n", mult);
//     }
// }

// -----------------------------------------------------------------------------------------------------------

/*6) Write a program in C to display the multiplier table vertically from 1 to n.*/

// int main(void)
// {
//     int i, j, number, mult;

//     printf("Input the desired number: ");
//     scanf("%d",&number);

//     printf("Multiplication table from 1 to %i \n", number);

//     for (i = 1; i <= 10; i++)
//     {
//         for (j = 1; j <= number; j++)
//         {
//             mult = i * j;
//             printf("%d x %d = %d, ", j, i, mult);
//         }
//         printf("\n");
//     }
// }


// -----------------------------------------------------------------------------------------------------------

/*7) Write a program to display the n terms of odd natural numbers and their sum.*/

// int main(void)
// {
//     int i, number, sum = 0;

//     printf("Input number of terms: ");
//     scanf("%i", &number);

//     printf("The odd numbers are: ");

//     for (i = 0; i <= number; i++)
//     {    
//         if (i % 2 != 0)
//         {
//             printf("%d ", i);
//             sum = sum + i;
//         }
//     }

//     printf("\nThe sum is: %i.\n", sum);
// }

// -----------------------------------------------------------------------------------------------------------

/*8) Write a program to display a pattern like a right angle triangle using an asterisk*/

// int main(void)
// {
//     int i, j, rows;

//     printf("Number of rows: ");
//     scanf("%d", &rows);

//     for (i = 1; i <= rows; i++)
//     {
//         for (j = 1; j <= i; j++)
//         {
//             printf("*");
//         }
    
//     printf("\n");
//     }
// }


// -----------------------------------------------------------------------------------------------------------

/*9) Write a C program to display a pattern like a right angle triangle with a number.*/

int main(void)
{
    
}