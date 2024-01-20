#include <stdio.h>

/*1) Write a program to generate and display a table of n and n^2, for integer values of n ranging from 1 to 10.*/

// int main(void)
// {
//     int j, square;

//     printf("Table of values for n and n^2\n");
//     printf("n           n^2\n");

//     for (j = 1; j <= 10; j++){
//         {
//             square = j * j;
//             printf("%i          %i\n", j, square);
//         }
//     }
// }

/*--------------------------------------------------------------------------------------------------------------------------------*/

/*2) A triangular number can also be generated by the formula

triangular_number = n (n + 1) / 2

for any integer value of n. For example, the 10th triangular number, 55, can be generated substituting 10 as the value for n in the preceeding formular. Write a program that generates a table of triangular numbers using the preceding formula. Have the program generate every fifty triangular number between 5 and 50 (5, 10, 15, 20, ..., 50)*/

// int main(void)
// {
//     int j, triangular_number;

//     printf("Table of all fifty triangular numbers between 5 and 50\n");
//     printf("n           Triangular Number\n");

//     for (j = 5; j <= 50; j++)
//     {
//         if (j % 5 == 0)
//         {
//             triangular_number = j * (j + 1) / 2;
//             printf("%i         %i\n", j, triangular_number);
//         }
//     }
// }

/*--------------------------------------------------------------------------------------------------------------------------------*/

/*3) The factorial of an integer n, written n!, is the product of the consecutive integers 1 through n. For example, 5 factorial is calculated as 

5! = 5*4*3*2*1 = 120

Write a program to generate and print a table of the first 10 factorials.*/

// int main(void)
// {
//     int j, fact = 1;

//     printf("Table of the first 10 factorials");
//     printf("n      factorial");

//     for (j = 1; j <= 10; j++)
//     {
//         fact *= j;
//         printf("%i       %i\n", j, fact);
//     }
// }

/*--------------------------------------------------------------------------------------------------------------------------------*/

/*4) Reformat the following program so that it is more readable:
int main(void){
int n,two_to_the_n;
printf("TABLE OF POWERS OF TWO\n\n");
printf(" n
2 to the n\n");
printf("---
---------------\n");
two_to_the_n=1;
for(n=0;n<=10;++n){
printf("%2i
%i\n",n,two_to_the_n); two_to_the_n*=2;}
return 0;}
*/

// int main(void)
// {
//     int n, power = 1;

//     printf("Table of powers of two \n\n");
//     printf("n    2 to the n\n");
//     printf("---  -----------\n");

//     for (n = 0; n <= 10; n++)
//     {
//         power = n*n;

//         printf("%2i       %i\n", n, power);
//     }
// }

/*--------------------------------------------------------------------------------------------------------------------------------*/

/*5)  Rewrite programs 1 through 4, replacing alll uses of the for statement by while statements.*/

/*a) program 1:*/

