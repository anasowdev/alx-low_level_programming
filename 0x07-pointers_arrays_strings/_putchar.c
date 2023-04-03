#include "main.h"
#include <unistd.h>
/**
*_putchar - writes the chartern c to stdout
*@c: The charcter to point
*
*Return: On success 1.
*On error, return -1, and error is set appropriately.
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
