/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmellado <jmellado@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 20:59:42 by noepache          #+#    #+#             */
/*   Updated: 2025/01/31 10:31:49 by jmellado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_search_hex(unsigned int n, const char word);

static int	ft_length(unsigned int n);

int	ft_printf_hex(unsigned int n, const char word)
{
	if (n == 0)
		return (ft_putchar('0'));
	else
		ft_search_hex(n, word);
	return (ft_length(n));
}

static void	ft_search_hex(unsigned int n, const char word)
{
	if (n >= 16)
	{
		ft_search_hex(n / 16, word);
		ft_search_hex(n % 16, word);
	}
	else
	{
		if (n < 10)
			ft_putchar(n + '0');
		else
		{
			if (word == 'x')
				ft_putchar(n - 10 + 'a');
			if (word == 'X')
				ft_putchar(n - 10 + 'A');
		}
	}
}

static int	ft_length(unsigned int n)
{
	int	len;

	len = 0;
	while (n != 0)
	{
		len++;
		n = n / 16;
	}
	return (len);
}
