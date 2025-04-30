/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beatde-a <beatde-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 18:01:48 by beatde-a          #+#    #+#             */
/*   Updated: 2025/04/30 18:01:48 by beatde-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

int	print_ptr_rec(uintptr_t addr)
{
	char	*base;
	int		len;

	base = "0123456789abcdef";
	len = 0;
	if (addr < 16)
		len += print_char(base[addr]);
	else
	{
		len += print_ptr_rec(addr / 16);
		len += print_char(base[addr % 16]);
	}
	return (len);
}

int	print_ptr(void *ptr)
{
	int			len;
	uintptr_t	addr;

	if (!ptr)
		return (print_str("(nil)"));
	len = 0;
	len += print_str("0x");
	addr = (uintptr_t)ptr;
	len += print_ptr_rec(addr);
	return (len);
}

int	print_hex_rec(unsigned long n, char *base)
{
	int	len;

	len = 0;
	if (n < 16)
		len += print_char(base[n]);
	else
	{
		len += print_hex_rec(n / 16, base);
		len += print_char(base[n % 16]);
	}
	return (len);
}

int	print_hex(unsigned int n, char type)
{
	unsigned long	nbr;

	nbr = n;
	if (type == 'X')
		return (print_hex_rec(nbr, "0123456789ABCDEF"));
	return (print_hex_rec(nbr, "0123456789abcdef"));
}
