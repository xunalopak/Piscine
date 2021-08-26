/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchampli <rchampli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 01:39:13 by rchampli          #+#    #+#             */
/*   Updated: 2021/08/17 01:43:54 by rchampli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void	ft_putnbr_base(int	nb, char *base);

void	ft_putchar(char ca)
{
	write(1, &ca, 1);
}

int	ft_strlen(char *base)
{
	unsigned int	i;

	i = 0;
	while (base[i] != '\0')
		i++;
	return (i);
}

void	ft_base(char *base, unsigned int nb, unsigned int i)
{
	ft_putnbr_base(nb / i, base);
	ft_putchar(base[nb % i]);
}

void	ft_putnbr_base(int	nb, char *base)
{
	if (base != 0)
	{
		if (nb == -2147483648)
			write(1, "-2147483648", 12);
		else if (nb > ft_strlen(base))
		{
			ft_base(base, nb, ft_strlen(base));
		}
		else if (nb < 0)
		{
			ft_putchar('-');
			ft_putnbr_base(nb * -1, base);
		}
		else
		{
			ft_putchar(nb + '0');
		}
	}
}
