/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 12:09:20 by beatde-a          #+#    #+#             */
/*   Updated: 2025/04/16 14:33:52 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//include condition for size == 0 || nmemb == 0 ? malloc(1)?

#include <stdio.h>
#include <stdint.h>
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	total_size;

	total_size = nmemb * size;
	if (size && (total_size / size != nmemb))
		return (NULL);
	ptr = malloc(total_size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, total_size);
	return (ptr);
}

//TO TEST
/*void	print_arr(int *arr, int nmemb)
{
	int	i;

	i = 0;
	while (i < nmemb)
	{
		printf("%d", *(arr + i));
		i++;
	}
	printf("\n");
}

int	main(int argc, char **argv)
{
	int	*ptr1;
	int	*ptr2;
	int	nmemb;
	int	size;

	if (argc != 2)
	{
		printf("Usage: [filename] [number of members]\n");
		return (1);
	}
	nmemb = ft_atoi(argv[1]);
	size = 4;

	printf("ft_calloc: ");
	ptr1 = ft_calloc(nmemb, size);
	if (!ptr1)
		printf("NULL\n");
	else 
		print_arr(ptr1, nmemb);
	free(ptr1);

	printf("calloc: ");
	ptr2 = calloc(nmemb, size);
	if (!ptr2)
		printf("NULL\n");
	else
		print_arr(ptr2, nmemb);
	free(ptr2);

	//Testing with size = 0
	printf("ft_calloc: ");
	ptr1 = ft_calloc(nmemb, 0);
	if (!ptr1)
		printf("NULL\n");
	else
		print_arr(ptr1, nmemb);
	free(ptr1);

	//testing with size = SIZE_MAX
	printf("ft_calloc: ");
	ptr1 = ft_calloc(2, SIZE_MAX);
	if (!ptr1)
		printf("NULL\n");
	else
		print_arr(ptr1, nmemb);
	free(ptr1);

	return (0);
}*/