/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchampli <rchampli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 00:14:27 by rchampli          #+#    #+#             */
/*   Updated: 2021/08/23 15:05:33 by rchampli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb <= 0)
		return (0);
	while (i * i <= nb && i < 46341)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	while (nb % i != 0)
	{
		if (i >= nb && i >= ft_sqrt(INT_MAX))
		{
			break ;
		}
		i++;
	}
	if (i == nb)
	{
		return (1);
	}
	return (0);
}

int	ft_find_next_prime(int	nb)
{
	if (nb == 1 || nb <= 0)
		return (2);
	else
	{
		while (nb <= INT_MAX)
		{
			if (ft_is_prime(nb + 1))
				return (nb + 1);
			nb = nb + 1;
		}
	}
	return (0);
}
