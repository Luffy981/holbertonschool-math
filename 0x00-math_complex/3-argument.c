#include "holberton.h"
#include <math.h>
/**
 * argument - function that returns the argument of a given complex number
 * @c: Struct complex
 * Return: Return value
 */
double argument(complex c)
{
	double argum;

	argum = atan(c.im / c.re);
	return (argum);
}
