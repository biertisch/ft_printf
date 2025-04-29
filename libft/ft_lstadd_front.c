/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 16:16:07 by beatde-a          #+#    #+#             */
/*   Updated: 2025/04/18 19:44:13 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

//TO TEST
/*int	main(int argc, char **argv)
{
	t_list	*lst;
	t_list	*new;
	char	*s;

	if (argc != 2)
	{
		printf("Usage: [filename] [string]\n");
		return (1);
	}
	s = argv[1];
	lst = ft_lstnew("old");
	new = ft_lstnew(s);
	printf("Before: %s\n", (char *)lst->content);
	ft_lstadd_front(&lst, new);
	if (!lst)
	{
		printf("NULL\n");
		return (1);
	}
	else if (lst->content)
		printf("After: %s\n", (char *)lst->content);
	else
		printf("After: null content\n");
	free(new);
	return (0);	
}*/