#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <math.h>
/**
 * struct sequence - Struct to sequence
 * @a: Real number
 * @next: Imaginary number
 *
 * Description: Struct  to complex number
 */
typedef struct sequence
{
	double a;
	t_cell next;
} t_cell;

t_cell *heron(double p, double x0);
t_cell *Fibonnaci();
double gold_number(t_cell *head);
#endinf
