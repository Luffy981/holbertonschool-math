#include "heron.h"
t_cell *heron(double p, double x0)
{
	t_cell *node;
	node = malloc(sizeof(t_cell));
	node->elt = x0;
	if(p - x0 >= 1/10000000)
	{
		x0 = (x0 + p/x0)/2;
		node->next = heron(p, x0);
	}
	else
	{
		return(node->next = NULL);
	}
	return(node);
}
