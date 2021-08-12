#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * struct sequence - Struct to sequence
 * @elt: Real number
 * @next: Imaginary number
 *
 * Description: Struct  to complex number
 */
typedef struct sequence
{
	double elt;
	struct sequence *next;
} t_cell;

t_cell *heron(double p, double x0);
t_cell *Fibonnaci();
double gold_number(t_cell *head);
#endif
