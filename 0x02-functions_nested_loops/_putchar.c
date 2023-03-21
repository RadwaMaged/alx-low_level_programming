#include "main.h"
#include <unistd.h>
/**
 * putchar - writes the character c to stdout
 * @c : The character to print
 * Return : 0n Succcess 1.
 * 0n error,-1 is returned, and error errno is set appropriately
 */
int _putchar(char c)
{
        return (write(1,&c,1));
}
