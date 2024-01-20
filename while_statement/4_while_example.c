/* Program to reverse the digits of a number*/

/*To reverse the digits of a number, the method of solution can be simply stated as 'successively read the digits of the number from right to left'. You can have a program that "successively read" the digits of the number by developing a procedure to successively isolate or "extract" each digit of the number, beginning with the rightmost digit. The extracted digit can be subsequently displayed at the terminal as the next digit of the reversed number.*/

/* You can extract the rightmost digit from an integer number by taking the remainder of the integer after it is divided by 10.*/

#include <stdio.h>

int main(void)
{
    int number, right_digit;

    printf("Enter your number:\n");
    scanf("%i", &number);

    while (number != 0)
    {
        right_digit = number % 10;
        printf("%i", right_digit);
        number = number / 10;
    }

    printf("\n");
}
