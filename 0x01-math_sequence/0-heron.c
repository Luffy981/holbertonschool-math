#include "heron.h"
/**
 * heron - function that return the Heron sequence until having convergence
 * @p: Number
 * @x0: Number
 *
 * Return: Return count
 */
t_cell *heron(double p, double x0)
{
	t_cell *node;
	t_cell *head;
	t_cell *ptr;

	node = malloc(sizeof(t_cell));
	node->elt = x0;
	node->next = NULL;
	if (fabs(p - (x0 * x0)) > (1 / 10000000))
	{
		x0 = (x0 + (p / x0)) / 2;
		head = heron(p, x0);
	} else
	{
		return (node);
	}
	ptr = head;
	while (head->next != NULL)
	{
		head = head->next;
	}
	head->next = node;
	return (ptr);
}
