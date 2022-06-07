#include "main.h"
/**
 *print_alphabet - print alphabet in lowercase
 *
 * return: Always (0)
 */
void print_alphabet(void)
{
int a = 97;
do {
_putchar(a++);
_putchar('\n');
} while(a < 123);
}

