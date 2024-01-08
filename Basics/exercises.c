// Note: the codes for each exercise will be kept commented. Take comments one at a time to make them work.

#include <stdio.h>
#include <math.h>
#include <stdlib.h>


/* 1) Write a C program to print your name, date of birth and mobile number.*/

// int main(void)
// {
//     printf("Name: Maria Vitoria Lazarin. \n");
//     printf("Date of birth: 19/11/1998. \n");
//     printf("Mobile number: 99-99999999. \n");

//     return 0;
// }

// --------------------------------------------------------------------------------------------------------

/* 2) Write a C program to print the following characters in reverse: 'X', 'M', 'L'.*/

// int main(void)
// {
//     char char1 = 'X';
//     char char2 = 'M';
//     char char3 = 'L';

//     printf("The reverse of %c%c%c is %c%c%c\n", char1, char2, char3, char3, char2, char1);

//     return 0;
// }

// --------------------------------------------------------------------------------------------------------

/* 3) Write a C program to compute the perimeter and area of a rectangle with a heigh of 7 inches and width of 5 inches. */

// int main(void)
// {
//     int heigh = 7;
//     int width = 5;
//     int perimeter = 7 * 2 + 5 * 2;
//     int area = 7 * 5;

//     printf("Perimeter of the rectangle = %i inches.\nArea of the rectangle = %i square inches.\n", perimeter, area);

//     return 0;
// }

// --------------------------------------------------------------------------------------------------------

/* 4) Wite a C program to compute the perimeter and area of a circle with a given radius.*/

// int main(void)
// {
//     float radius;

//     printf("Type the radius of the circle: ");
//     scanf("%f", &radius);

//     float perimeter = 2 * 3.14 * radius;
//     float area = 3.14 * radius * radius;

//     printf("Perimeter of the circle = %f.\nArea of the circle = %f square inches.\n", perimeter, area);
    
//     return 0;
// }

// --------------------------------------------------------------------------------------------------------

/* 5) Write a C program to display multiple variables. Sample variables: a + c, x + c, dx + c, ((int)dx)+ax, a + x, s + b, ax + b, s + c, ax + c, ax + ux */

// int main(void)
// {
//     int a = 125, b = 12345; 
//     long ax = 1234567890;
//     short s = 4043; 
//     float x = 2.13459; 
//     double dx = 1.1415927; 
//     char c = 'W'; 
//     unsigned long ux = 2541567890;

//     printf("a + c = %d\n", a + c);
//     printf("x + c = %f\n", x + c);
//     printf("dx + x = %f\n", dx + x);
//     printf("dx + ax = %ld\n", ((int) dx) + ax);
//     printf("a + x = %f\n", a + x);
//     printf("s + b =  %d\n", s + b);
//     printf("ax + b = %ld\n", ax + b);
//     printf("s + c =  %hd\n", s + c);
//     printf("ax + c = %ld\n", ax + c);
//     printf("ax + ux = %lu\n", ax + ux);

//     return 0;
// }

// --------------------------------------------------------------------------------------------------------

/*6) Write a C program to convert specified days into years, weeks and days*/

// int main(void)
// {
//     int number_days;

//     printf("Number of days: ");
//     scanf("%i", &number_days);

//     int years = number_days / 365;
//     int weeks = (number_days % 365)/7;
//     int days = number_days - ((years*365) + (weeks*7));

//     printf("Years: %i\nWeeks: %i\nDays: %i\n", years, weeks, days);
    
//     return 0;
// }

// --------------------------------------------------------------------------------------------------------

/*7) Write a C program that accepts two i ntegers from the user and calculates the sum of the two integers. */

// int main(void)
// {
//     int x;
//     printf("Choose an integer value for x: ");
//     scanf("%i", &x);

//     int y;
//     printf("Choose an integer value for y: ");
//     scanf("%i", &y);

//     printf("Sum of the above two integers: %i.\n", x + y);

//     return 0;
// }

// --------------------------------------------------------------------------------------------------------

/*8) Write a C program that accepts two integers from the user and calculates the product of the two integers*/

// int main(void)
// {
//     int x, y, product;

//     printf("Choose an integer value for x: ");
//     scanf("%i", &x);

//     printf("Choose an integer value for y: ");
//     scanf("%i", &y);

//     product = x * y;

//     printf("Product of the above two integers: %i.\n", product);

//     return 0;
// }

// --------------------------------------------------------------------------------------------------------

/*9) Write a C program that accepts two item's weight and number of purchases (floating point values) and calculates their average value.*/

// int main(void)
// {
//     float weight1, weight2, purchase1, purchase2, average;

//     printf("Weight of the first item: ");
//     scanf("%f", &weight1);

//     printf("Number of purchases of the first item: ");
//     scanf("%f", &purchase1);

//     printf("Weight of the second item: ");
//     scanf("%f", &weight2);
    
//     printf("Number of purchases of the second item: ");
//     scanf("%f", &purchase2);

//     average = ((weight1 * purchase1) + (weight2 * purchase2))/(purchase1+purchase2);


//     printf("Average value: %f.\n", average);
// }

// --------------------------------------------------------------------------------------------------------

/*10) Write a C program that accepts an employee's ID, total worked hours in a month and the amount he received per hour. Print the ID and salary (with two decimal places) of the employee for a particular month.*/

// int main(void)
// {
//     int id;

//     printf("Employees ID: ");
//     scanf("%i", &id);

//     float work_hours, sal_hour, total_salary; 

//     printf("Working hours: ");
//     scanf("%f", &work_hours);

//     printf("Salary amount/hr: ");
//     scanf("%f", &sal_hour);

//     total_salary = sal_hour * work_hours;


//     printf("Employees ID = %i \nSalary = U$ %.2lf\n", id, total_salary);
// }

// --------------------------------------------------------------------------------------------------------

/*11) Write a program that accepts three integers and finds the maximum of three.*/

// int main(void)
// {
//     int int1, int2, int3;

//     printf("First integer: ");
//     scanf("%i", &int1);

//     printf("Second integer: ");
//     scanf("%i", &int2);

//     printf("Third integer: ");
//     scanf("%i", &int3);
    
//     int result = (int1 + int2 + abs(int1 - int2))/2;

//     int max_value = (result + int3 + abs(result - int3))/2;

//     printf("\nMaximum value of three integers: %i\n", max_value);    
    
// }

// --------------------------------------------------------------------------------------------------------

/*12) Write a program to calculate a bike's average consumption from the given total distance (int number) travelled (in km) and spent fuel (in litters, float number - 2 decimal points).*/

// int main(void)
// {
//     int distance;

//     printf("Total distance travelled (in km): ");
//     scanf("%d", &distance);

//     float fuel;
//     printf("Fuel spent in litters: ");
//     scanf("%f", &fuel);

//     printf("Average consumption (km/L): %.2f.\n", distance/fuel);

// }

// --------------------------------------------------------------------------------------------------------

/*13) Calculate the distance between two points*/

// int main(void)
// {
//     double x1, y1, x2, y2;

//     printf("Input x1: ");
//     scanf("%lf", &x1);

//     printf("Input x2: ");
//     scanf("%lf", &x2);

//     printf("Input y1: ");
//     scanf("%lf", &y1);

//     printf("Input y2: ");
//     scanf("%lf", &y2);

//     double distance = (x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1);

//     printf("The distance between the given points is: %.4lf.\n", sqrt(distance));
// }

// --------------------------------------------------------------------------------------------------------

/*14) Write a program to read an amount (integer value) and break the amount into the smallest possible number of bank notes*/

// int main(void)
// {
//     int amount, total;

//     printf("Input the amount: ");
//     scanf("%d", &amount);

//     total = (int)amount / 100;
//     printf("There are:\n");
//     printf("%d note(s) of 100.00\n", total);
//     amount = amount - (total*100);

//     total = (int)amount / 50;
//     printf("%d note(s) of 50.00\n", total);
//     amount = amount - (total*50);

//     total = (int)amount / 25;
//     printf("%d note(s) of 25.00\n", total);
//     amount = amount - (total*25);

//     total = (int)amount / 10;
//     printf("%d note(s) of 10.00\n", total);
//     amount = amount - (total*10);

//     total = (int)amount / 5;
//     printf("%d note(s) of 5.00\n", total);
//     amount = amount - (total*5);

//     total = (int)amount;
//     printf("%d note(s) of 1.00\n", total);
// }


// --------------------------------------------------------------------------------------------------------

/*15) Write a C program to convert a given integer (in seconds) to hours, minutes and seconds*/

