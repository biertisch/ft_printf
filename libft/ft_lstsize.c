/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 16:16:35 by beatde-a          #+#    #+#             */
/*   Updated: 2025/04/18 19:45:05 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	size;

	size = 0;
	while (lst)
	{
		size++;
		lst = lst->next;
	}
	return (size);
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
	int		n;
	
	if (argc != 2)
	{
		printf("Usage: [filename] [number of elements]\n");
		return (1);
	}
	n = ft_atoi(argv[1]);
	lst = build_list(n);
	if (!lst)
	{
		printf("Null list\n");
		return (1);
	}
	print_list(lst);
	printf("Number of elements: %d\n", ft_lstsize(lst));
	ft_lstclear(&lst, del);
	return (0);	
}*/