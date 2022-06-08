#include"main.h"
/**
 * jack_bauer - print all minutes
 *
 * return: Always integer
 */

void jack_bauer(void)
{
int a, b, c, d, e = 58;
for(a = 48; a < 51; a++)
{
for(b = 48; b < 52; b++)
{
for (c = 48; c < 54; c++)
{
for (d = 48; d < 58; d++)
{
_putchar(a);
_putchar(b);
_putchar(e);
_putchar(c);
_putchar(d);
_putchar('\n');
}
}
}
}
}
