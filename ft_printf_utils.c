/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 16:57:15 by beatde-a          #+#    #+#             */
/*   Updated: 2025/04/29 16:57:15 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

int	print_char(char c)
{
	int	len;

	len = write(1, &c, 1);
	return (len);
}

int	print_str(char *s)
{
	int	len;

	if (!s)
	{
		write(1, "(null)", 6);
		return (6);
	}
	len = write(1, s, ft_strlen(s));
	return (len);
}

int	print_int(int n)
{
	char *nbr;

	nbr = ft_itoa(n);
	if (!nbr)
		return (-1);
	return (print_str(nbr));
}

int	print_uint(unsigned int n)
{
	char *nbr;

	nbr = ft_itoa((unsigned int)n);
	if (!nbr)
		return (-1);
	return (print_str(nbr));
}