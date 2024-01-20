/*Finding the greatest commom divisor of two integer numbers*/

/*There is a procedure or algorithm that can be followed to arrive at the answer for two arbitrary integers.

- Problem: Find the greatest commom divisor of two nonnegative integers u and v.

- Step 1: If v equals 0, then you are done and the greatest commom divisor is equal to u.

- Step 2: Calculate temp = u % v, u = v, v = temp and go back to step 1.*/

#include <stdio.h>

int main(void)
{
    int u, v, temp; 

    printf("Please type in two nonnegative integers.\n");
    scanf("%i%i", &u, &v);

    while (v != 0)
    {
        temp = u % v;
        u = v;
        v = temp;
    }

    printf("Their greatest commom divisor is %i.\n", u);
}

/* The double %i characters in the scanf call indicate that two integers values are to be entered from the keyboard. The first value is stored in the variable u, and the second is stored in the variable v.

After the values have been entered from the keyboard and stored in the variables u and v, the program enters a while loop to calculate their greatest commom divisor.*/