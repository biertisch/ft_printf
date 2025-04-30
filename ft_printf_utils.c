/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 16:57:15 by beatde-a          #+#    #+#             */
/*   Updated: 2025/04/30 11:46:13 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

int	print_char(char c)
{
	return (write(1, &c, 1));
}

int	print_str(char *s)
{
	if (!s)
		return (write(1, "(null)", 6));
	return (write(1, s, ft_strlen(s)));
}

int	print_int(int n)
{
	long int	nbr;
	int			len;

	nbr = n;
	len = 0;
	if (nbr < 0)
	{
		len += print_char('-');
		nbr *= -1;
	}
	if (nbr < 10)
		len += print_char(nbr + 48);
	else
	{
		len += print_int(nbr / 10);
		len += print_char(nbr % 10 + 48);
	}
	return (len);
}

int	print_uint(unsigned int n)
{
	unsigned long	nbr;
	int				len;

	nbr = n;
	len = 0;
	if (nbr < 10)
		len += print_char(nbr + 48);
	else
	{
		len += print_int(nbr / 10);
		len += print_char(nbr % 10 + 48);
	}
	return (len);
}
