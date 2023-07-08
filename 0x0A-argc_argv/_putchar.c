#include <stdio.h>
#include "main.h"

/**
 *_putchar - write schar c to stdout
 *@c: the char to print
 *Return : On succcess 1.
 *On error, -1 is returned and errno is set appropriately.
*/
int _putchar(char c)
{
return (write(1, &c, 1));

}
