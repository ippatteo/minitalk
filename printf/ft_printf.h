/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcamilli <mcamilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 03:00:55 by mcamilli          #+#    #+#             */
/*   Updated: 2023/05/10 15:09:23 by mcamilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <string.h>
# include <ctype.h>
# include <stdarg.h>

int		ft_putchar(char c);
int		ft_putstr(char *s);
int		ft_putnbr(int n);
int		ft_esa(long unsigned k, char *f, int base);
int		ft_printf(const char *s, ...);
int		ft_esa_x(unsigned int k, char *f, int base);
int		ft_putnbr_u(unsigned int n);

#endif
