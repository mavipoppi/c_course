/* In 4_while_example, we used a while statement to reverse the digits of a number. If we typed 0 instead of 1348, for example, the loop while would never be executed. But, if we use a do statement instead of a while statement, we are assured that the program loop executes at least once, thus guaranteeing the display of a least one digit in all cases.*/

#include <stdio.h>

int main(void)
{
    int number, right_digit;

    printf("Enter your number:\n");
    scanf("%i", &number);

    do
    {
        right_digit = number % 10;
        printf("%i", right_digit);
        number = number / 10;
    }
    while (number != 0);

    printf("\n");


}

