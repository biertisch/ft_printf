/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 14:26:31 by beatde-a          #+#    #+#             */
/*   Updated: 2025/04/16 14:27:11 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

char	*ft_strnstr(const char *str, const char *sub, size_t n)
{
	size_t	i;
	size_t	sub_len;

	sub_len = ft_strlen(sub);
	if (!sub[0])
		return ((char *)str);
	i = 0;
	while (str[i] && (i + sub_len <= n))
	{
		if (ft_strncmp(str + i, sub, sub_len) == 0)
			return ((char *)str + i);
		i++;
	}
	return (NULL);
}

//TO TEST
/*int	main(int argc, char **argv)
{
	char	*str;
	char	*sub;
	int		n;

	if (argc != 4)
	{
		printf("Usage: [filename] [main string] [substring] [length]\n");
		return (1);
	}
	str = argv[1];
	sub = argv[2];
	n = ft_atoi(argv[3]);
	printf("ft_strnstr: %s\n", ft_strnstr(str, sub, n));
	//printf("strnstr: %s\n", strnstr(main, sub, n));
	printf("ft_strnstr: %s\n", ft_strnstr(str, str, n));
	//printf("strnstr: %s\n", strnstr(main, main, n));	
	return (0);
}*/