/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 16:17:26 by beatde-a          #+#    #+#             */
/*   Updated: 2025/04/18 19:44:24 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

//TO TEST
/*void	del(void *content)
{
	if (content)
		free(content);
}

void	print_list(t_list *lst)
{
	while (lst)
	{
		printf("%s\n", (char *)lst->content);
		lst = lst->next;
	}
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
	t_list	*trav;
	int		n;
	int		i;
	int		size;

	if (argc != 3)
	{
		printf("Usage: [filename] [nbr elements] [index node to delete]\n");
		return (1);
	}
	n = ft_atoi(argv[1]);
	i = ft_atoi(argv[2]);
	lst = build_list(n);
	if (!lst)
	{
		printf("There is no list\n");
		return (1);
	}
	
	//find node to delete
	size = ft_lstsize(lst);
	if (i > size - 1)
	{
		printf("There is no ith node in the list\n");
		return (1);
	}
	trav = lst; 
	while (i > 0)
	{
		trav = trav->next;
		i--;
	}
	
	ft_lstdelone(trav, del);

	printf("AFTER\n");
	print_list(lst);

	ft_lstclear(&lst, del);
	return (0);
}*/