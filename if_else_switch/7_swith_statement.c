/*The type of if-else statement chain is so commonly used when developing programs that a speial program statement exists in the C language for perfoming this function. The name of the statement is the switch statement, and its general format is

switch (expression)
{
    case value1:
        program statement
        program statement
        ...
        break;
    case value2:
        program statement
        program statement
        ...
        break;
    case valuen:
        program statement
        program statement
        ...
        break;
    default: 
        program statement
        program statement
        ...
        break;
}

The expression enclosed within parentheses is successively compared against the values value1, value2, ..., valuen, which must be simple constants or constant expressions. If a case is foound whose value is equal to the value of expression, the program statements that follow the case are executed. Note that when more than one such program statement is included, they do not have to be enclosed within braces.

The break statement signals the end of a particular case and causes execution of the switch statement to be terminated. 

The special optional case called default is executed if the value of expression does not match any of the case values.

The general form of the switch statement can be equivalently expressed as an if statement as follows:

if (expression == value1)
{
    program statement
    program statement
    ...
}
else if (expression == value2)
{
    program statement
    program statement
    ...
}
...
else if (expression == valuen)
{
    program statement
    program statement
    ...
}
else
{
    program statement
    program statement
    ...
}

*/

#include <stdio.h>

int main(void)
{
    float value1, value2;
    char operator;

    printf("Type in your expression.\n");
    scanf("%f %c %f", &value1, &operator, &value2);

    switch (operator)
    {
        case '+':
            printf("%.2f\n", value1 + value2);
            break;
        case '-':
            printf("%.2f\n", value1 - value2);
            break;
        case '*':
            printf("%.2f\n", value1 * value2);
            break;
        case '/':
            if (value2 == 0)
                printf("Division by zero.\n");
            else    
                printf("%.2f\n", value1 / value2);
            break;
        default:
            printf("Unknown operator.\n");
            break;
    }
}



