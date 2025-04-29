/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 14:25:53 by beatde-a          #+#    #+#             */
/*   Updated: 2025/04/16 14:26:09 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (s1[i] || s2[i]))
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}

//TO TEST
/*int	main(int argc, char **argv)
{
	char	*s1;
	char	*s2;
	int		n;

	if (argc != 4)
	{
		printf("Usage: [filename] [string 1] [string 2] [length]\n");
		return (1);
	}
	s1 = argv[1];
	s2 = argv[2];
	n = atoi(argv[3]);
	printf("ft_strncmp: %d\n", ft_strncmp(s1, s2, n));
	printf("strncmp: %d\n", strncmp(s1, s2, n));
	printf("ft_strncmp: %d\n", ft_strncmp("test\0", "test\1", 5));
	printf("strncmp: %d\n", strncmp("test\0", "test\1", 5));
	printf("ft_strncmp: %d\n", ft_strncmp("\0", "\200", 1));
	printf("strncmp: %d\n", strncmp("\0", "\200", 1));
	return (0);
}*/