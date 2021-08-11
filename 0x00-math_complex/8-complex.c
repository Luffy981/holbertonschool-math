#include "holberton.h"
#include <math.h>
/**
 * complex_from_mod_arg - function the argument of a given complex number
 * @m: Module of complex
 * @arg: Argument of complex
 * @c3: complex
 */
void complex_from_mod_arg(double m, double arg, complex *c3)
{
	(*c3).im = m * sin(arg);
	(*c3).re = m * cos(arg);
}
