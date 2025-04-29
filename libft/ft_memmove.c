/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 12:27:30 by beatde-a          #+#    #+#             */
/*   Updated: 2025/04/16 13:42:52 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	if (d == s || n == 0)
		return (dst);
	if (d < s)
		ft_memcpy(dst, src, n);
	else
	{
		while (n > 0)
		{
			n--;
			d[n] = s[n];
		}
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
	char	str1[7] = "abcdef";
	char	str2[7] = "abcdef";
	char	str3[7] = "abcdef";
	char	str4[7] = "abcdef";
	int		arr1[7] = {0, 1, 2, 3, 4, 5, 6};
	int		arr2[7] = {0, 1, 2, 3, 4, 5, 6};
	int		arr3[7] = {0, 1, 2, 3, 4, 5, 6};
	int		arr4[7] = {0, 1, 2, 3, 4, 5, 6};
	int		start;
	int		n;

	if (argc != 3)
	{
		printf("Usage: [filename] [number of elements] [start]\n");
		return (1);
	}
	n = ft_atoi(argv[1]);
	start = ft_atoi(argv[2]);
	while(n + start > 7)
		n--;

	//testing with string
	ft_memmove(str1 + start, str1, n);
	printf("ft_memmove: %s\n", str1);
	memmove(str2 + start, str2, n);
	printf("memmove: %s\n", str2);

	ft_memmove(str3, str3 + start, n);
	printf("ft_memmove: %s\n", str3);
	memmove(str4, str4 + start, n);
	printf("memmove: %s\n", str4);

	//testing with int array
	ft_memmove(arr1 + start, arr1, sizeof(int) * n);
	printf("ft_memmove: ");
	print_arr(arr1);
	memmove(arr2 + start, arr2, sizeof(int) * n);
	printf("memmove: ");
	print_arr(arr2);

	ft_memmove(arr3, arr3 + start, sizeof(int) * n);
	printf("ft_memmove: ");
	print_arr(arr3);
	memmove(arr4, arr4 + start, sizeof(int) * n);
	printf("memmove: ");
	print_arr(arr4);

	return (0);
}*/