#include "holberton.h"
/**
 * addition - function that performs the addition operation to complex numbers
 * @c1: Struct complex
 * @c2: Struct complex
 * @c3: Struct complex
 */
void addition(complex c1, complex c2, complex *c3)
{
	c3->re = c1.re + c2.re;
	c3->im = c1.im + c2.im;
}
