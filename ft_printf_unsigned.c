/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmellado <jmellado@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 12:26:33 by jmellado          #+#    #+#             */
/*   Updated: 2025/01/31 12:26:40 by jmellado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_unsigned(unsigned int nb)
{
	unsigned int	len;

	len = 0;
	if (nb == 0)
		len += ft_putchar('0');
	else
	{
		if (nb / 10 != 0)
			ft_printf_unsigned(nb / 10);
		ft_putchar((nb % 10) + '0');
		while (nb > 0)
		{
			nb /= 10;
			len++;
		}
	}
	return (len);
}
