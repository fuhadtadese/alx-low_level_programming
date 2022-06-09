#include"main.h"
/**
 *_islower - return 0 if c  is lowercase
 *
 * Return: 1 or 0 success
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
} else
{
return (0);
}
_putchar('\n');
}
