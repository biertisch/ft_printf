/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 16:16:50 by beatde-a          #+#    #+#             */
/*   Updated: 2025/04/18 19:44:42 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
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
		sprintf(s, "banana%d", n);
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
	int		n;
	
	if (argc != 2)
	{
		printf("Usage: [filename] [number of elements]\n");
		return (1);
	}
	n = ft_atoi(argv[1]);
	lst = build_list(n);
	if (!lst)
		printf("Null list\n");	
	
	last = ft_lstlast(lst);
	if (!last)
		printf("Null node\n");
	else
		printf("Last element: %s\n", (char *)last->content);
	
	ft_lstclear(&lst, del);		
	return (0);
}*/