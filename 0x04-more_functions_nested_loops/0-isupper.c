#include"main.h"
/*
 * _isupper - checks for uppercase
 *
 * @c: function arguement
 *
 * Return: 1 = uppercase 0 != uppercase
 * */

int _isupper(int c)
{
if (c == 65 ||
c == 66 ||
c == 67 ||
c == 68 || c == 69 || c == 70 || c == 71 ||
c == 72 || c == 73 || c == 74 || c == 75 ||
c == 76 || c == 77 || c == 78 || c == 79 || c == 80 ||
c == 81 || c == 82 || c == 83 || c == 84 ||
c == 85 || c == 86 || c == 87 || c == 88 || c == 89 ||
c == 90){
return (1);
} else
{
return (0);
}
}
