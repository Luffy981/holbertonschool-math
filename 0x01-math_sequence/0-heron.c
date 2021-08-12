#include "holberton.h"
t_cell *heron(double p, double x0);
{
	t_cell *node;
	t_cell *head;
	node = malloc(sizeof(t_cell));
	node->elt = x0;
	while(x0 >= 1/10000000)
	{
		x0 = (x0 + p/x0)/2;
		head = heron(p, x0);
	}
	if(x0 < 1/10000000)
	{
		return(node->next = NULL);
	}
}
