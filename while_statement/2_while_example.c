/*Program to introduce the while statement*/

#include <stdio.h>

int main(void)
{
    int count = 1; 

    while (count <= 5)
    {
        printf("%i\n", count);
        ++count;
    }
}

/* The program initially sets the value of count to 1. The execution of the while loop begins and happens till the value of count is less than or equal to 5. While this is TRUE, the statement is executed (it will print the numbers from 1 to 5, always adding one after executed).*/


/*OBS: we could easily accomplished the same task by using a for statement. In fact, a for statement can always be translated into an equivalent while statement. For example: 

for (init_expression; loop_condition; loop_expression)
    program statement

can be equivalently expressed in the form of a while statement as

init_expression;
while (loop_condition)
{
    program_statement;
    loop_expression;
}

