#include <stdio.h>

/*Calling functions*/

int floating_numbers();
int double_data();
int integers_numbers();
int character_type();
int bool_type();


/*Main function*/

int main(void)
{
    int f_number = floating_numbers();
    int double_d = double_data();
    int int_number = integers_numbers();
    int char_number = character_type();
    int bool_variable = bool_type();




}

/*Floating numbers*/

int floating_numbers()
{
    float a = 0.0f;
    float b = 2.5f;
    float c = 2E-4f;
    
    printf("%f\n", a);
    printf("%f\n", b);
    printf("%f\n", c);
    printf("\n");

    return 0;
}

/*Double data type*/

int double_data()
{
    double a = 123123123.00;
    double b = 12.293123;
    double c = 2398734.239;

    printf("%lf\n", a);
    printf("%lf\n", b);
    printf("%lf\n", c);
    printf("\n");

    return 0;
}

/*Integers*/

int integers_numbers()
{
    int a = 9;
    int b = -9;
    int c = 89U;
    long int d = 99998L;

    printf("Integer value with positive data: %d\n", a);
    printf("Integer value with negative data: %d\n", b);
    printf("Integer value with an unsigned int data: %d\n", c);
    printf("Integer value with an long int data: %d\n", d);
}

/* Characters */

int character_type()
{
    char a = 'a';
    char c;

    printf("Value of a: %c\n", a);
    
    a++;
    printf("Value of a after increment is: %c\n", a);

    c = 99;
    printf("Value of c: %c", c);
    printf("\n");

    return 0;
}

/*Boolean*/

int bool_type()
{
    int integervar = 100;
    float floatingvar = 331.79;
    double doublevar = 8.44e+11;
    char charvar = 'W';
    _Bool boolvar = 0;

    printf("integervar = %i\n", integervar);
    printf("floatingvar = %i\n", floatingvar);
    printf("doublevar = %i\n", doublevar);
    printf("charvar = %i\n", charvar);
    printf("boolvar = %i\n", boolvar);

    return 0;
}