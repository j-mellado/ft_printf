/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_number.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmellado <jmellado@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 12:27:24 by jmellado          #+#    #+#             */
/*   Updated: 2025/01/31 12:27:27 by jmellado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_number(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		len += ft_putchar('0');
	if (n == -2147483648)
	{
		len += ft_printf_string("-2147483648");
		return (len);
	}
	if (n < 0)
	{
		len += ft_putchar('-');
		n = -n;
	}
	if (n > 0)
	{
		len += ft_printf_unsigned((unsigned int)n);
	}
	return (len);
}

/*#include <stdio.h>

int main()
{
	int	len;

	len = ft_printf_number(877739);
	write(1, "\n", 1);
	printf("longitud: %d\n", len);
	return (0);
}*/
