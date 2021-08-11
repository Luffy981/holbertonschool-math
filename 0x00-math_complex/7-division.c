#include "holberton.h"
/**
 * division - function that performs the division operation to complex numbers
 * @c1: Struct complex
 * @c2: Struct complex
 * @c3: Struct complex
 */
void division(complex c1, complex c2, complex *c3)
{
	double a;

	a = (c2.re * c2.re + c2.im * c2.im);
	(*c3).re = ((c1.re * c2.re) + (c1.im * c2.im)) / a;
	(*c3).im = ((c1.im * c2.re) - (c1.re * c2.im)) / a;
}
