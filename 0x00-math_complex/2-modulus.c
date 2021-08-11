#include <math.h>
#include "holberton.h"
/**
 * modulus - function that returns the modulus of a given complex number
 * @c: Struct complex
 * Return: Return value
 */
double modulus(complex c)
{
	double mod;
	double a;
	double b;

	a = c.re;
	b = c.im;
	mod = sqrt(pow(a, 2) + pow(b, 2));
	return (mod);
}
