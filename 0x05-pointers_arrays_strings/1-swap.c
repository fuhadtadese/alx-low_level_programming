#include"main.h"
/*
 * swap_int - swaps integer
 *
 * @a: first argument for function
 *
 * @b: second argument for function
 *
 * Return: A swapped integers
 */
void swap_int(int *a, int *b);
void swap_int(int *a, int *b)
{
a = &b;
b = &a;
}
