/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmellado <jmellado@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 12:26:05 by jmellado          #+#    #+#             */
/*   Updated: 2025/01/31 12:54:56 by jmellado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

int	ft_printf(char const *str, ...);
int	ft_putchar(int c);
int	ft_printf_string(char *str);
int	ft_printf_pointer(unsigned long long ptr);
int	ft_printf_number(int n);
int	ft_printf_unsigned(unsigned int nb);
int	ft_printf_hex(unsigned int n, const char word);

#endif
