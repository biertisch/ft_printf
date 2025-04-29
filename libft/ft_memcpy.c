/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 12:23:41 by beatde-a          #+#    #+#             */
/*   Updated: 2025/04/16 16:10:09 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	if (dst == src)
		return (dst);
	i = 0;
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((const unsigned char *)src)[i];
		i++;
	}
	return (dst);
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
	char	*src;
	char	dst1[30] = "world";
	char	dst2[30] = "world";
	int		arr_src[5] = {9, 8, 7, 6, 5};
	int		arr_dst1[5] = {0, 1, 2, 3, 4};
	int		arr_dst2[5] = {0, 1, 2, 3, 4};
	int		n;

	if (argc != 3)
	{
		printf("Usage: [filename] [source string] [number of elements]\n");
		return (1);
	}
	src = argv[1];
	n = ft_atoi(argv[2]);

	//testing with string
	ft_memcpy(dst1, src, n);
	printf("ft_memcpy: %s\n", dst1);
	memcpy(dst2, src, n);
	printf("memcpy: %s\n", dst2);

	ft_memcpy(dst1, dst1, n);
	printf("ft_memcpy: %s\n", dst1);

	//testing with int array
	ft_memcpy(arr_dst1, arr_src, sizeof(int) * n);
	printf("ft_memcpy: ");
	print_arr(arr_dst1);

	memcpy(arr_dst2, arr_src, sizeof(int) * n);
	printf("memcpy: ");
	print_arr(arr_dst2);

	return (0);
}*/