#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	t_list	*list;
	int i = 0;

	list = begin_list;
	if (!list)
		return (0);
	while(list)
	{
		i++;
		list = list->next;
	}
	return (i);
}

/*
Allowed functions:
--------------------------------------------------------------------------------

Write a function that returns the number of elements in the linked list that's
passed to it.

It must be declared as follows:

int	ft_list_size(t_list *begin_list);

You must use the following structure, and turn it in as a file called
ft_list.h:

typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;*/
