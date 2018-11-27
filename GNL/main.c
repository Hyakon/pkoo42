#include <stdio.h>
#include <stdlib.h>

typedef struct	s_list
{
	int i;
	struct s_list *next;
}		t_list;

t_list *add_nodend(t_list *lst)
{
	t_list *tmp;

	tmp = (t_list *)malloc(sizeof(t_list));
	if (!tmp)
		return (NULL);
	if (lst == NULL)
	{
		tmp-> i = 1;
		tmp->next = NULL;
	}
	else
	{
		while (lst->next != NULL)
		{
			lst = lst->next;
		}
		tmp->i = lst->i + 1;
		tmp->next = NULL;
		lst->next = tmp;	
	}
	return (tmp);
}

void addllist(t_list *lst)
{
	while (lst)
	{
		lst->i += 1;
		lst = lst->next;
	}
}

void printlist(t_list *lst)
{
	while (lst)
	{
		printf("%d -", lst->i);
		lst = lst->next;
	}
	printf("\n");
}

int	get_next_line(const int fd, char **line)
{
	static t_list *lst;

	if (!lst)
		lst = add_nodend(lst);
	else
		add_nodend(lst);
	addllist(lst);
	printlist(lst);
	return (1);
}

int main()
{
	char *c;
	for (int i = 0; i < 10; i++)
	{
		get_next_line(i, &c);
	}
	return (1);
}
