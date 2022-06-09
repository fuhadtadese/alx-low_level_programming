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
else if (m == 1 ||m == -1)
{
_putchar (49);
}
else if (m == 2 ||m == -2)
{
_putchar (50);
}
else if (m == 3 ||m == -3)
{
_putchar (51);
}
else if (m == 4 ||m == -4)
{
_putchar (52);
}
else if (m == 5 ||m == -5)
{
_putchar (53);
}
else if (m == 6 ||m == -6)
{
_putchar (54);
}
else if (m == 7 ||m == -7)
{
_putchar (55);
}
else if (m == 8 ||m == -8)
{
_putchar (56);
}
else if (m == 9 ||m == -9)
{
_putchar (57);
} else
{
_putchar('\n');
}
return (m * 1);
}
