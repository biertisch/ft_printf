/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 16:17:14 by beatde-a          #+#    #+#             */
/*   Updated: 2025/04/18 19:44:01 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	if (!*lst)
		*lst = new;
	else
	{
		last = ft_lstlast(*lst);
		last->next = new;
	}
}

//TO TEST
/*void	del(void *content)
{
	if (content)
		free(content);
}

t_list	*build_list(int n)
{
	t_list	*lst;
	t_list	*new;
	
	lst = NULL;
	while (n > 0)
	{
		char *s = malloc(20);
		if (!s)
			return (NULL);
		sprintf(s, "banana%d", n - 1);
		new = ft_lstnew(s);
		if (!new)
		{
			free(s);
			return (NULL);
		}
		ft_lstadd_front(&lst, new);
		n--;
	}
	return (lst);
}

int	main(int argc, char **argv)
{
	t_list	*lst;
	t_list	*last;
	t_list	*new;
	char	*s;
	int		n;
	
	if (argc != 3)
	{
		printf("Usage: [filename] [string] [current number of elements]\n");
		return (1);
	}
	s = ft_strdup(argv[1]);
	n = ft_atoi(argv[2]);
	lst = build_list(n);
	if (!lst)
	{
		printf("Null list\n");
		return (1);
	}
	new = ft_lstnew(s);
	if (!new)
	{
		printf("New node null\n");
		return (1);
	}
	
	last = ft_lstlast(lst);
	if (!last)
		printf("Last element BEFORE: null\n");
	else
		printf("Last element BEFORE: %s\n", (char *)last->content);
	printf("Number of elements BEFORE: %d\n", ft_lstsize(lst));

	ft_lstadd_back(&lst, new);
	
	last = ft_lstlast(lst);
	if (!last)
		printf("Last element AFTER: null\n");
	else
		printf("Last element AFTER: %s\n", (char *)last->content);
	printf("Number of elements AFTER: %d\n", ft_lstsize(lst));
	
	ft_lstclear(&lst, del);
	return (0);	
}*/