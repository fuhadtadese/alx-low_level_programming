#include"main.h"
#include <stdio.h>
/**
 * print_to_98 - prints integer to 98
 *
 * return: always integer success
 */
void print_to_98(int n)
{
if (n < 98)
{
do 
{
printf ("%d", n++);
if (n < 99)
{
putchar(44);
putchar(' ');
}
} while (n < 99);
} else if (n > 98)
{
do 
{
printf("%d", n--);
if (n > 97)
putchar(44);
putchar(' ');
} while (n > 97);
} else 
{
printf ("98");
}
