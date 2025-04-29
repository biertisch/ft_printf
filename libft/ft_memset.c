/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 13:43:29 by beatde-a          #+#    #+#             */
/*   Updated: 2025/04/16 13:52:54 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

//TO TEST
/*void	print_arr(int *arr)
{
	size_t	i;
	
	i = 0;
	while (i < 5)
	{
		printf("%i", arr[i]);
		i++;
	}
	printf("\n");
}

int	main(int argc, char **argv)
{
	char	str1[6] = "hello";
	char	str2[6] = "hello";
	char	str3[6] = "";
	char	str4[6] = "";
	char	str5[7] = "banana";
	char	str6[7] = "banana";
	int		arr1[5] = {1, 2, 3, 4, 5};
	int		arr2[5] = {1, 2, 3, 4, 5};
	char	c;
	int		n;

	if (argc != 3)
	{
		printf("Usage: [filename] [character] [number of members]\n");
		return (1);
	}
	c = argv[1][0];
	n = ft_atoi(argv[2]);
	
	//testing with string
	ft_memset(str1, c, n);
	printf("ft_memset: %s\n", str1);
	memset(str2, c, n);
	printf("memset: %s\n", str2);

	//testing with empty string
	ft_memset(str3, c, n);
	printf("ft_memset: %s\n", str3);
	memset(str4, c, n);
	printf("memset: %s\n", str4);
	
	//testing with non-ascii character
	ft_memset(str5, 256, n);
	printf("ft_memset: %s\n", str5);
	memset(str6, 256, n);
	printf("memset: %s\n", str6);

	//testing with int array
	printf("ft_memset: ");
	ft_memset(arr1, 0, sizeof(int) * n);
	print_arr(arr1);

	printf("memset: ");
	memset(arr2, 0, sizeof(int) * n);
	print_arr(arr2);

	return (0);
}*/