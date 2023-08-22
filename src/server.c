/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcamilli <mcamilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 13:21:05 by mcamilli          #+#    #+#             */
/*   Updated: 2023/08/21 14:56:25 by mcamilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/minitalk.h"

int	ft_unotoi(int x)
{
	if (x == 0)
		return (128);
	if (x == 1)
		return (64);
	if (x == 2)
		return (32);
	if (x == 3)
		return (16);
	if (x == 4)
		return (8);
	if (x == 5)
		return (4);
	if (x == 6)
		return (2);
	if (x == 7)
		return (1);
	else
		return (0);
}

void	ft_btoa(int sig)
{
	static int	bit;
	static int	i;

	if (sig == SIGUSR1)
		i = i + ft_unotoi(bit);
	bit++;
	if (bit == 8)
	{
		ft_printf("%c", i);
		bit = 0;
		i = 0;
	}
}

int	main(int argc, char **argv)
{
	int	pid;

	(void)argv;
	if (argc != 1)
	{
		ft_printf("Error\n");
		return (1);
	}
	pid = getpid();
	ft_printf("%d\n", pid);
	while (argc == 1)
	{
		signal(SIGUSR1, ft_btoa);
		signal(SIGUSR2, ft_btoa);
		pause ();
	}
	return (0);
}
