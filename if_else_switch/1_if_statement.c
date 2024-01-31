/*Suppose you want to write a program that accepts an integer typed in from the terminal and then displays the absolute value of that integer. A straighforward way to calculate the absolute value of an integer is to simply negate the number if it is less than zero.*/

#include <stdio.h>

int main(void)
{ 
  int number;

  printf("Type in your number: ");
  scanf("%d", &number);

  if (number < 0)
    {
      number = -number;
    }

    printf("The absolute value is %d\n", number);

}

/*After a message is displayed to the user and the integer value that is entered is stored in number, the program tests the value of number to see if it is less than zero. If it is, the following program statement, which negates the value of number, is executed. If the value of number is not less than zero, this program statement is automatically skipped. The absolute value of number is then displayed by the program and the program executions ends.*/