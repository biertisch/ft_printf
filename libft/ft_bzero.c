/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 12:03:36 by beatde-a          #+#    #+#             */
/*   Updated: 2025/04/16 14:56:21 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
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
	int		arr1[6] = {1, 2, 3, 4, 5, 6};
	int		arr2[6] = {1, 2, 3, 4, 5, 6};
	int		n;
	int		start;

	if (argc != 3)
	{
		printf("Usage: [filename] [number of elements] [start]\n");
		return (1);
	}
	n = ft_atoi(argv[1]);
	start = ft_atoi(argv[2]);
	if (n > 6 || start > 6)
	{
		printf("Arguments must be between 0 and 6\n");
		return (1);
	}
	while (n + start > 6)
		n--;

	//testing with string
	ft_bzero(str1 + start, n);
	printf("ft_bzero: %s\n", str1);
	bzero(str2 + start, n);
	printf("bzero: %s\n", str2);

	//testing with int array
	ft_bzero(arr1 + start, sizeof(int) * n);
	printf("ft_bzero: ");
	print_arr(arr1);

	bzero(arr2 + start, sizeof(int) * n);
	printf("bzero: ");
	print_arr(arr2);

	return (0);
}*/