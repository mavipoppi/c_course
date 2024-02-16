/*Let's consider the task of writing a program that displays -1 if a number is less than zero, 0 if the number typed in is equal to zero, and 1 if the number is greater than 0 (this is an implementation of the sign function). In this case, the if else construct does not work. But we can handle the situation by adding an if statement to your else clause. In general, you could write: 

if (expression 1)
    program statement 1
else
    if (expression 2)
        program statement 2
    else
        program statement 3
    
the preceding construct is referred to as an else if construct and is usually formatted as

if (expression 1)
    program statement 1
else if (expression 2)
    program statement 2
else
    program statement 3 */

#include <stdio.h>

int main(void)
{
    int number, sign;

    printf("Please type in a number: ");
    scanf("%i", &number);

    if (number < 0)
    {
        sign = -1;
    }
    else if (number == 0)
    {
        sign = 0;
    }
    else 
    {
        sign = 1;
    }

    printf("Sign = %i\n", sign);

}

/* If the number that is entered is less than zero, sign is assigned the value -1. If the number is equal to zero, sign is assigned the value 0. Otherwise, the number must be greater than zero, so sign is assigned the value 1.

The next program analyses a character that is typed in from the terminal and classifies it as either an alphabetic character, a digit or a special character.*/ 

// int main(void)
// {
//     char c; 

//     printf("Enter a single character:\n");
//     scanf("%c", &c);

//     if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
//     {
//         printf("It's an alphabetic character.\n");
//     }
//     else if (c >= '0' && c <= '9')
//     {
//         printf("It's an digit.\n");
//     }
//     else 
//     {
//         printf("It's a special character.\n");
//     }
// }

/* For the next example, suppose you want to write a program that allows the user to type in simple expressions of the form number, operator, number. The program evaluates the expression and displays the results at the terminal, to two decimal places of accuracy. */

// int main(void)
// {
//     float value1, value2;
//     char operator;

//     printf("Type in your expression.\n");
//     scanf("%f %c %f", &value1, &operator, &value2);

//     if (operator == '+')
//     {  
//         printf("%.2f\n", value1 + value2);
//     }
//     else if (operator == '-')
//     {
//         printf("%.2f\n", value1 - value2);
//     }
//     else if (operator == '*')
//     {
//         printf("%.2f\n", value1 * value2);
//     }
//     else if (operator == '/')
//     {
//         printf("%.2f\n", value1 / value2);
//     }
// }

/*The program is not really complete since it does not account for mistakes made by the user (like typing an unknown operator or trying to make a division by zero). The program below is a modified version that accounts those situations.*/

// int main(void)
// {
//     float value1, value2; 
//     char operator;

//     printf("Type in your expression.\n");
//     scanf("%f %c %f", &value1, &operator, &value2);

//     if (operator == '+')
//     {
//         printf("%.2f\n", value1 + value2);
//     }
//     else if (operator == '-')
//     {
//         printf("%.2f\n", value1 - value2);
//     }
//     else if (operator == '*')
//     {
//         printf("%.2f\n", value1 * value2);
//     }
//     else if (operator == '/')
//     {
//         if (value2 == 0)
//         {
//             printf("Division by zero.\n");
//         }
//         else
//         {
//             printf("%.2f\n", value1 / value2);
//         }
//     }
//     else
//     {
//         printf("Unknown operator.\n");
//     }
// }