/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 16:18:09 by beatde-a          #+#    #+#             */
/*   Updated: 2025/04/18 19:44:49 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

static void	*set_content(t_list *lst, void *(*f)(void *))
{
	void	*new_content;

	if (f)
		new_content = f(lst->content);
	else
		new_content = ft_strdup(lst->content);
	if (!new_content)
		return (NULL);
	else
		return (new_content);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*next;
	void	*new_content;

	if (!lst || !del)
		return (NULL);
	new_content = set_content(lst, f);
	if (!new_content)
		return (NULL);
	new = ft_lstnew(new_content);
	if (!new)
	{
		del(new_content);
		return (NULL);
	}
	next = ft_lstmap(lst->next, f, del);
	if (lst->next && !next)
	{
		ft_lstclear(&new, del);
		return (NULL);
	}
	new->next = next;
	return (new);
}

//TO TEST
/*void	*test_f(void *content)
{
	void	*new_content;
	
	if (!content)
		return (NULL);
	new_content = malloc(14);
	if (!new_content)
		return (NULL);
	ft_strlcpy(new_content, "I'm brand new", 14);
	return (new_content);
}

void	del(void *content)
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
	t_list	*new_lst;
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
		printf("No old list\n");
		return (1); 
	}
	
	new_lst = ft_lstmap(lst, test_f, del);
	if (!new_lst)
	{
		printf("No new list\n");
		ft_lstclear(&lst, del);
		return (1);
	}

	printf("Old list:\n");	
	print_list(lst);
	printf("\nNew list:\n");
	print_list(new_lst);
	
	ft_lstclear(&lst, del);
	ft_lstclear(&new_lst, del);
	return (0);	
}*/