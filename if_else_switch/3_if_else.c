// Determining if a number is even or odd 

#include <stdio.h>

int main(void)
{
  int number_to_test, remainder;

  printf("Enter your number to be tested: ");
  scanf("%i", &number_to_test);

  remainder = number_to_test % 2;

  if (remainder == 0)
  {
    printf("The number is even.\n");
  }

  else
    {
      printf("The number is odd.\n");
    }
}

/*After the number is typed, the remainder after division by 2 is calculated. The if statement tests the value of this remainder to see if it is equal to zero. If it is, the message "The number is even" is displayed. The else statement considers the cases not satisfied by the first statement, which in this case are odd numbers, and causes the message "The number is odd" to be shown on the screen. */