/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 16:15:44 by beatde-a          #+#    #+#             */
/*   Updated: 2025/04/18 19:44:58 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

//TO TEST
/*int	main(int argc, char **argv)
{
	char	*s;
	t_list	*new;
	
	if (argc != 2)
	{
		printf("Usage: [filename] [string]\n");
		return (1);
	}
	s = argv[1];
	new = ft_lstnew(s);
	if (!new)
		printf("NULL\n");
	else if (new->content)
	{
		printf("%s\n", (char *)new->content);
		free (new);
	}		
	else
	{
		printf("null content\n");
		free (new);
	}

	new = ft_lstnew(NULL);
	if (!new)
		printf("NULL\n");
	else if (new->content)
	{
		printf("%s\n", (char *)new->content);
		free (new);
	}
	else
	{
		printf("null content\n");
		free (new);
	}

	return (0);
}*/