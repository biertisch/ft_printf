/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 12:22:57 by beatde-a          #+#    #+#             */
/*   Updated: 2025/04/16 12:23:14 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*p1;
	unsigned char	*p2;
	size_t			i;

	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (p1[i] != p2[i])
			return (p1[i] - p2[i]);
		i++;
	}
	return (0);
}

//TO TEST
/*int	main(int argc, char **argv)
{
	const char	*s1;
	const char	*s2;
	int			n;
	int			arr1[5] = {0, 1, 2, 3, 4};
	int			arr2[5] = {0, 1, 2, 7, 9};

	if (argc != 4)
	{
		printf("Usage: [filename] [string 1] [string 2] [size]\n");
		return (1);
	}
	s1 = argv[1];
	s2 = argv[2];
	n = ft_atoi(argv[3]);
	
	//testing with strings
	printf("ft_memcmp: %d\n", ft_memcmp(s1, s2, n));
	printf("memcmp: %d\n", memcmp(s1, s2, n));
	
	printf("ft_memcmp: %d\n", ft_memcmp("test\0", "test\1", 5));
	printf("memcmp: %d\n", memcmp("test\0", "test\1", 5));
	
	printf("ft_memcmp: %d\n", ft_memcmp("\x80", "\x81", 1));
	printf("memcmp: %d\n", memcmp("\x80", "\x81", 1));

	//testing with int array
	n *= sizeof(int);
	printf("ft_memcmp: %d\n", ft_memcmp(arr1, arr2, n));
	printf("memcmp: %d\n", memcmp(arr1, arr2, n));

	return (0);
}*/