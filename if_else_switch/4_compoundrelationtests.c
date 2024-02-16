/*A compound relational test is simply one or more simple relational tests joined by either the logical AND or the logical OR operator. These operators are represented by the character pairs && and ||.

Example: 

if (grade >= 79 && grade <= 79)
    ++grades_70_to_79

increments the value of grades_70_to_79 only if the value of grade is greater than or equal to 70 and less than or equal to 79. 

Another example: 

if (index < 0 || index > 99)
    printf("Error - index out of range\n");

causes execution of the printf statement if index is less than 0 or greater than 99. */

/* Example 3) Determining if a year is a leap year */

#include <stdio.h>

int main(void)
{
    int year;

    printf("Enter the year to be tested: ");
    scanf("%i", &year);

    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
        printf("It's a leap year.\n");
    }

    else
    {
        printf("It's not a leap year.\n");
    }


}