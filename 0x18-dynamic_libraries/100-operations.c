#include <stdio.h>

/*
 * add - Adds two integers
 * @a: First integer
 * @b: Second integer
 *
 * Returns: Sum of @a and @b
 */
int add(int a, int b)
{
    return a + b;
}

/*
 * sub - Subtracts two integers
 * @a: First integer
 * @b: Second integer
 *
 * Returns: Difference of @a and @b
 */
int sub(int a, int b)
{
    return a - b;
}

/*
 * mul - Multiplies two integers
 * @a: First integer
 * @b: Second integer
 *
 * Returns: Product of @a and @b
 */
int mul(int a, int b)
{
    return a * b;
}

/*
 * divide - Divides two integers
 * @a: First integer (dividend)
 * @b: Second integer (divisor)
 *
 * Returns: Quotient of @a divided by @b
 */
int divide(int a, int b)
{
    if (b != 0)
        return a / b;
    else {
        printf("Error: Division by zero\n");
        return 0;
    }
}

/*
 * mod - Calculates the modulus of two integers
 * @a: First integer (dividend)
 * @b: Second integer (divisor)
 *
 * Returns: Remainder of @a divided by @b
 */
int mod(int a, int b)
{
    if (b != 0)
        return a % b;
    else {
        printf("Error: Modulus by zero\n");
        return 0;
    }
}
