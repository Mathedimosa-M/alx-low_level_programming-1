#include "main.h"
/**
 * _memset - fill a block of memory with a specific value
 *@b: the desired value
 *@n: number of bytes that should be changed
 *starting address of memory to be filled
 *Return: the change in  array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
int i = 0;

for (; n > 0; i++)
{
s[i] = b;
n--;
}
return (s);
}

