// Note: the codes for each exercise will be kept commented. Take comments one at a time to make them work.

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/*16) Write a program to convert a given integer (in days) to years, months and days, assuming that all months have 30 days and all years have 365 days.*/

// int main(void)
// {
//     int total, days, months, years;

//     printf("Input no. of days: ");
//     scanf("%d", &total);

//     years = total/365;
//     total = total - years*365;

//     months = total / 30;
//     total = total - months*30;

//     days = total;

//     printf("%i years, %i months and %i days.\n", years, months, days);
    
// }

/* ------------------------------------------------------------------------------------------------------*/

/*17) Write a program that accepts 4 integers p, q, r e s from the user where q, r and s are positive and p is even. If q is greater that r and s is greater than p and if the sum or r and s is greates than the sum of p and q print "Correct values", otherwise, print "Wrong values". */

// int main(void)
// {

//     int p, q, r, s; 

//     printf("Input the first integer: ");
//     scanf("%i", &p);

//     printf("Input the second integer: ");
//     scanf("%i", &q);

//     printf("Input the third integer: ");
//     scanf("%i", &r);

//     printf("Input the fourth integer: ");
//     scanf("%i", &s);

//     if ((q > r) && (s > p) && ((r + s) > (p + q)) && (r > 0) && (s > 0) && (p%2 == 0))
//     {
//         printf("\nCorrect values.\n");
//     }
//     else
//     {
//         printf("\nWrong values.\n");
//     }
// }

/* ------------------------------------------------------------------------------------------------------*/

/*18) Write a program to print the roots of Bhaskara's formula from the givent hree floating numbers. Display a message if it is not possible to find the roots.*/

// int main(void)
// {
//     double a, b, c, delta, root1, root2;

//     printf("Input the first number (a): ");
//     scanf("%lf", &a);

//     printf("Input the second number (b): ");
//     scanf("%lf", &b);

//     printf("Input the third number (c): ");
//     scanf("%lf", &c);

//     delta = (b*b - 4*a*c);  

//     if (delta < 0 || a == 0)
//     {
//         printf("Unable to find the roots.\n");
//     }
//     else
//     {
//         root1 = (- b + sqrt(delta))/(2*a);

//         root2 = (- b - sqrt(delta))/(2*a);

//         printf("The roots are %.2f and %.2f.", root1, root2); 
//     }
// }

/* ------------------------------------------------------------------------------------------------------*/

/*19) Write a program that reads an integer and checks the specified range to which it belongs. Print an error message if the number is negative or greater than 80*/

// int main(void)
// {
//     int x;

//     printf("Input an integer: ");
//     scanf("%i", &x);

//     if (x >= 0 && x <= 20)
//     {
//         printf("Range [0, 20].\n");
//     }

//     else if (x >= 21 && x <= 40)
//     {
//         printf("Range [21, 40].\n");
//     }
 
//     else if (x >= 41 && x <= 60)
//     {
//         printf("Range [41, 60].\n");
//     }

//     else if (x >= 61 && x <= 80)
//     {
//         printf("Range [61, 28].\n");
//     }

//     else
//     {
//         printf("Error: the number is outside the permitted range.\n");
//     }
// }

/* ------------------------------------------------------------------------------------------------------*/

/*20) Write a program that reads 5 numbers and sums all odd values between them*/

// int main(void)
// {
//     int j, numbers[5], total = 0;

//     printf("Input the first number: ");
//     scanf("%i", &numbers[0]);

//     printf("Input the second number: ");
//     scanf("%i", &numbers[1]);

//     printf("Input the third number: ");
//     scanf("%i", &numbers[2]);

//     printf("Input the fourth number: ");
//     scanf("%i", &numbers[3]);

//     printf("Input the fifth number: ");
//     scanf("%i", &numbers[4]);

//     for (j = 0; j < 5; j++)
//     {
//         if ((numbers[j]%2) != 0)
//         {
//             total += numbers[j];
//         }
//     }

//     printf("Sum of all odd values: %i.\n", total);
// }

/* ------------------------------------------------------------------------------------------------------*/

/*21) Write a program that reads three floating-point values and checks if it is possible to make a triangle with them. Determine the perimeter of the triangle if the given values are valid.*/

// int main(void)
// {
//     double a, b, c, perimeter;

//     printf("Input the first number: ");
//     scanf("%lf", &a);

//     printf("Input the second number: ");
//     scanf("%lf", &b);

//     printf("Input the third number: ");
//     scanf("%lf", &c);

//     if ((a + b > c) && (a + c > b) && (b + c > a))
//     {
//         perimeter = a + b + c;

//         printf("The perimeter of the triangle is %.4lf.\n", perimeter);
//     }
//     else
//     {
//         printf("Impossible to make a triangle.\n");
//     }
// }

/* ------------------------------------------------------------------------------------------------------*/

/*22) Write a program that reads two integers and checks whether they are multiplied or not*/

// int main(void)
// {
//     int x, y;
    
//     printf("Input the first number: ");
//     scanf("%i", &x);

//     printf("Input the second number: ");
//     scanf("%i", &y);

//     if (y > x)
//     {
//         int temp;
//         temp = x;
//         x = y;
//         y = temp;
//     }

//     if (x % y == 0)
//     {
//         printf("Multiplied!");
//     }
//     else
//     {
//         printf("Not multiplied!");
//     }
// }

/* ------------------------------------------------------------------------------------------------------*/

/*23) Write a program that reads an integer between 1 and 12  and prints the month of the year in English*/

// int main(void)
// {
//     int n;

//     printf("Input a number between 1 and 12 to get the month name: ");
//     scanf("%i", &n);

//     switch(n)
//     {
//         case 1 : printf("January\n"); break;
//         case 2 : printf("February\n"); break;
//         case 3 : printf("March\n"); break;
//         case 4 : printf("April\n"); break;
//         case 5 : printf("May\n"); break;
//         case 6 : printf("June\n"); break;
//         case 7 : printf("July\n"); break;
//         case 8 : printf("August\n"); break;
//         case 9 : printf("September\n"); break;
//         case 10 : printf("October\n"); break;
//         case 11 : printf("November\n"); break;
//         case 12 : printf("December\n"); break;
//         default : printf("Input a number between 1 to 12.");
//     }
// }

/* ------------------------------------------------------------------------------------------------------*/

/*24) Write a program that prints all even numbers between 1 and 50.*/

// int main(void)
// {
//     int x;

//     printf("The even numbers between the range are: ");

//     for (x = 1; x <= 50; x++)
//     {
//         if (x % 2 == 0)
//         {
//             printf("%d, ", x);
//         }
//     }
// }

/* ------------------------------------------------------------------------------------------------------*/

/*25) Write a program that reads 5 numbers and counts the number of positive and negative numbers*/

// int main(void)
// {
//     float numbers[5]; 
//     int j, pos_numb = 0, neg_numb = 0;

//     printf("Input the first number: ");
//     scanf("%f", &numbers[0]);

//     printf("Input the second number: ");
//     scanf("%f", &numbers[1]);

//     printf("Input the third number: ");
//     scanf("%f", &numbers[2]);

//     printf("Input the fourth number: ");
//     scanf("%f", &numbers[3]);

//     printf("Input the fifty number: ");
//     scanf("%f", &numbers[4]);

//     for (j = 0; j < 5; j++)
//     {
//         if (numbers[j] > 0)
//         {
//             pos_numb++;
//         }
//         else if (numbers[j] < 0)
//         {
//             neg_numb++;
//         }
//     }

//     printf("Number of positive numbers: %d.\n", pos_numb);
//     printf("Number of negative numbers: %d.\n", neg_numb);
// }

/* ------------------------------------------------------------------------------------------------------*/

/*26) Write a C program that reads 5 numbers, counts the number of positive numbers and prints out the average of all positive values*/

// int main(void)
// {
//     float numbers[5], total = 0, average;
//     int j, positive = 0;

//     printf("Input the first number: ");
//     scanf("%f", &numbers[0]);

//     printf("Input the second number: ");
//     scanf("%f", &numbers[1]);

//     printf("Input the third number: ");
//     scanf("%f", &numbers[2]);

//     printf("Input the fourth number: ");
//     scanf("%f", &numbers[3]);

//     printf("Input the fifth number: ");
//     scanf("%f", &numbers[4]);

//     for (j = 0; j < 5; j++)
//     {
//         if (numbers[j] > 0)
//         {
//             positive++;
//             total += numbers[j];
//         }
        
//     }

//     average = total / positive;

//     printf("Number of positive numbers: %i.\n", positive);

//     printf("Average of the said positive numbers: %.2f.\n", average);
//  }

/* ------------------------------------------------------------------------------------------------------*/

/*27) Write a program that read 5 numbers and sum all odd values between them.*/

// int main(void)
// {
//     int numbers[5], sum = 0, j;

//     printf("Input the first number: ");
//     scanf("%i", &numbers[0]);

//     printf("Input the second number: ");
//     scanf("%i", &numbers[1]);

//     printf("Input the third number: ");
//     scanf("%i", &numbers[2]);

//     printf("Input the fourth number: ");
//     scanf("%i", &numbers[3]);

//     printf("Input the fifth number: ");
//     scanf("%i", &numbers[4]);

//     for (j = 0; j < 5; j++)
//     {
//         if (numbers[j] % 2 != 0)
//         {
//             sum += numbers[j];
//         }
//     }

//     printf("The sum of all odd numbers is %i.\n", sum);
// }

/* ------------------------------------------------------------------------------------------------------*/

/*28) Write a program to find and print the square of all the even values from 1 to a specified value. */

int main(void)
{
    int value, j; 

    printf("Specified value: ");
    scanf("%i", &value);

    printf("List of square of each one of the even values from 1 to a %d :\n", value);

    for (j = 2; j <= value; j++)
    {
        if((j%2) == 0)
        {
            printf("%i ^ 2 = %i.\n", j, j*j);
        }
    }
}

/* ------------------------------------------------------------------------------------------------------*/

/*29) */