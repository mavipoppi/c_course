/* Illustrating the use of various arithmetic operators*/

#include <stdio.h>

int arithmetic();
int mod_op();


int main(void)
{
    int arith_expressions = arithmetic();
    int modulos = mod_op();

}

/*Arithmetic expressions*/
int arithmetic()
{
    int a = 300;
    int b = 3;
    float c = 28.45;
    float d = 4.98;

    //subtraction
    printf("a - b = %i\n", a - b);

    //multiplication
    printf("b * c = %f\n", b * c);

    //division
    printf("a / c = %f\n", a / c);

    //precedence
    printf("a + b * c = %f\n", a + b * c);

    printf("a * b + c * d = %f\n", a * b + c * d);

    return 0;
}

/*Modulos operator*/
int mod_op()
{
    int a = 25, b = 5, c = 10, d = 7;

    printf("a %% b = %i\n", a % b);
    printf("a %% c = %i\n", a % c);
    printf("a %% d = %i\n", a % d);
    printf("a / d * d + a %% d = %i\n", a / d * d + a % d);

    return 0;
 
}