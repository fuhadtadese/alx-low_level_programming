#include"main.h"
/**
 * _isalpha - returns 1 for all alphabet
 *
 * return: 1 for alphabet 0 for others
 */
int _isalpha(int c)
{
if (c >= 65 && c <= 122)
{
return(1);
} else{
return(0);
}
_putchar('\n');
}
