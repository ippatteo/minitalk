/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcamilli <mcamilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 13:20:57 by mcamilli          #+#    #+#             */
/*   Updated: 2023/08/21 14:47:04 by mcamilli         ###   ########.fr       */
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

static int	ft_atoi(const char *str)
{
	int					i;
	int					sign;
	unsigned long int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result *= 10;
		result += str[i] - '0';
		i++;
	}
	return (result * sign);
}

void	ft_atob(int pid, char c)
{
	int	bit;
	int	b;

	b = c;
	bit = 0;
	while (bit <= 7)
	{
		if (b >= ft_unotoi(bit))
		{
			kill(pid, SIGUSR1);
			b = b - ft_unotoi(bit);
		}
		else
			kill(pid, SIGUSR2);
		usleep(500);
		bit++ ;
	}
}

int	main(int argc, char **argv)
{
	int	pid;
	int	i;

	i = 0;
	if (argc == 3)
	{
		pid = ft_atoi(argv[1]);
		while (argv[2][i] != '\0')
		{
			ft_atob(pid, argv[2][i]);
			i++;
		}
	}
	else
	{
		ft_printf("Error\n");
		return (1);
	}
	return (0);
}
