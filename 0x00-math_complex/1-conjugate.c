#include "holberton.h"
/**
 * conjugate - function that returns the conjugate of a given complex number
 * @c: Struct complex
 * Return: Return value
 */
complex conjugate(complex c)
{
	if (c.im < 0)
		c.im = c.im * (-1);
	else
		c.im = -c.im;
	return (c);
}
