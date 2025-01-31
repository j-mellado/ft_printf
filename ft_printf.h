/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmellado <jmellado@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 18:35:54 by noepache          #+#    #+#             */
/*   Updated: 2025/01/31 10:31:30 by jmellado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>

int	ft_printf(char const *str, ...);
int	ft_putchar(int c);
int	ft_printf_string(char *str);
int	ft_printf_pointer(unsigned long long ptr);
int	ft_printf_number(int n);
int	ft_printf_unsigned(unsigned int nb);
int	ft_printf_hex(unsigned int n, const char word);

#endif
