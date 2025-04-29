/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 14:28:50 by beatde-a          #+#    #+#             */
/*   Updated: 2025/04/16 14:28:58 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start > s_len)
		return (ft_strdup(""));
	else if (start + len > s_len)
		len = s_len - start;
	sub = malloc(len + 1);
	if (!sub)
		return (NULL);
	ft_strlcpy(sub, s + start, len + 1);
	return (sub);
}

//TO TEST
/*int	main(int argc, char **argv)
{
	char	*s;
	char	*sub;
	int		start;
	int		len;

	if (argc != 4)
	{
		printf("Usage: ./a.out [string] [start] [max length]\n");
		return (1);
	}
	s = argv[1];
	start = ft_atoi(argv[2]);
	len = ft_atoi(argv[3]);
	sub = ft_substr(s, start, len);
	if (!sub)
		printf("NULL\n");
	else
		printf("%s\n", sub);
	free(sub);
	return (0);
}*/