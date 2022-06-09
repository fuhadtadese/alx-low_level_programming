#include"main.h"
/**
 * print_last_digit - prints last digit
 *
 *@n: arguement to function
 *
 * return: last digit.
 */
int print_last_digit(int n)
{
int m;
m = n % 10;
if (m == 0)
{
_putchar (48);
}
else if (m == 1)
{
_putchar (49);
}
else if (m == 2)
{
_putchar (50);
}
else if (m == 3)
{
_putchar (51);
}
else if (m == 4)
{
_putchar (52);
}
else if (m == 5)
{
_putchar (53);
}
else if (m == 6)
{
_putchar (54);
}
else if (m == 7)
{
_putchar (55);
}
else if (m == 8)
{
_putchar (56);
}
else
{
_putchar (57);
}
return (m * 1);
}
