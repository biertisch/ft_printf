/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 14:27:33 by beatde-a          #+#    #+#             */
/*   Updated: 2025/04/16 14:27:36 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		i--;
	}
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
	printf("ft_strrchr: %s\n", ft_strrchr(s, c));
	printf("strrchr: %s\n", strrchr(s, c));
	printf("ft_strrchr: %s\n", ft_strrchr(s, '\0'));
	printf("strrchr: %s\n", strrchr(s, '\0'));
	printf("ft_strrchr: %s\n", ft_strrchr("", '\0'));
	printf("strrchr: %s\n", strrchr("", '\0'));
	printf("ft_strrchr: %s\n", ft_strrchr(s, s[0] + 256));
	printf("strrchr: %s\n", strrchr(s, s[0] + 256));
	printf("ft_strrchr: %s\n", ft_strrchr(s, 256));
	printf("strrchr: %s\n", strrchr(s, 256));
	return (0);
}*/