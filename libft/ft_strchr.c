/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 14:13:09 by beatde-a          #+#    #+#             */
/*   Updated: 2025/04/16 14:15:41 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int				i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		i++;
	}
	if (s[i] == (char)c)
		return ((char *)s + i);
	return (NULL);
}

//TO TEST
/*int	main(int argc, char **argv)
{
	char	*s;
	char	c;

	if (argc != 3)
	{
		printf("Usage: [filename] [string] [character]\n");
		return (1);
	}
	s = argv[1];
	c = argv[2][0];
	printf("ft_strchr: %s\n", ft_strchr(s, c));
	printf("strchr: %s\n", strchr(s, c));
	printf("ft_strchr: %s\n", ft_strchr(s, '\0'));
	printf("strchr: %s\n", strchr(s, '\0'));
	printf("ft_strchr: %s\n", ft_strchr("", '\0'));
	printf("strchr: %s\n", strchr("", '\0'));
	printf("ft_strchr: %s\n", ft_strchr(s, s[0] + 256));
	printf("strchr: %s\n", strchr(s, s[0] + 256));
	printf("ft_strchr: %s\n", ft_strchr(s, 256));
	printf("strchr: %s\n", strchr(s, 256));
	return (0);
}*/