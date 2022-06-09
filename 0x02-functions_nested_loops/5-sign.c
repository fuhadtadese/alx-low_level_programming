#include"main.h"
/**
 * print_sign - return 0 for 0, return 1 for 1 and -1 for -1,
 *
 * @n: argument for function
 *
 * Return: Return 0,1,-1 always 0
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar (43);
return (1);
} 
else if (n < 0)
{
_putchar (45);
return (-1);
}
else
{
_putchar (48);
return (0);
}
_putchar (48);
}
