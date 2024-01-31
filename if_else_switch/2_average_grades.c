/*Imagine that you have a list of grades for which you want to compute the average. But in addition to that, suppose that you also need a count of the number of failing grades in the list. The noiton of keeping count of the number of failing grades indicates that you must make a decision as to whether a grade qualifies as a failing grade.*/


#include <stdio.h>

int main(void)
{
  int numberofgrades, i, grade;
  int grade_total = 0;
  int failurecount = 0; 
  float average;

  printf("How many grades will you be entering? ");
  scanf("%i", &numberofgrades);

  for (i = 1; i <= numberofgrades; ++i)
  {
    printf("Enter grade #%i: ", i);
    scanf("%i", &grade);

    grade_total = grade_total + grade;

    if (grade < 65)
    {
      ++failurecount;
    }
  }

  average = (float) grade_total / numberofgrades;
  
  printf("\nGrade average = %.2f\n", average);
  printf("Number of failures = %i\n", failurecount);

}

/* VARIABLES:

The variable grade_total is used to keep a cumulative total of the grades as they are typed in at the terminal and it is initially set to 0. 

The number of failing test grades is stored in the variable failurecount, whose value is also initially zero. 

The variable average is declaredto be of typo float since the average of a set of integers is not necessarily an integer itself. 

PROGRAM: 

The program asks the user to enter the number of grades that will be keyed in and stores the value that is entered in the variable numberofgrades. A loop is the set up that will be executed for each grade. The first part of the loop prompts the user to enter in the grade. After that, the value entered is stored in the valriable grade.

The value of grade is then added into grade_total, after which a test is made to see if it is a failing test grade. If it is, the value of failurecount is incremented by one. The loop is repeated.

When all of the grades have been entered and totaled, the program then calculates the
grade average. The type cast operator (float) is used to convert the value of the variable grade_total to type float.
*/
