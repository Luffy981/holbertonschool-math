#include "holberton.h"
/**
 * display_complex_number - Function to print complex number
 * @c: Struct complex
 */
void display_complex_number(complex c)
{
	if (c.im != 0 && c.re != 0)
	{
		if (c.im == 1)
			printf("%.0f + i\n", c.re);
		else
			printf("%.0f + %.0fi\n", c.re, c.im);
	}
	else if (c.re != 0 && c.im == 0)
		printf("%.0f\n", c.re);
	else if (c.re == 0 && c.im != 0)
	{
		if (c.im == 1)
			printf("i\n");
		else
			printf("%.0fi\n", c.im);
	}
	else if (c.re == 0 && c.im == 0)
		printf("%d\n", 0);
}
