/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchampli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 16:15:47 by rchampli          #+#    #+#             */
/*   Updated: 2021/08/07 19:11:58 by rchampli         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_display(int a, int b, int c)
{
	char	ca;
	char	cb;
	char	cc;

	ca = a + '0';
	cb = b + '0';
	cc = c + '0';
	write(1, &ca, 1);
	write(1, &cb, 1);
	write(1, &cc, 1);
	if (a < 7 || b < 8 || c < 9)
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = 0;
	b = 0;
	c = 0;
	while (a <= 7 || b < 8 || c < 9)
	{
		if (c == 10)
		{
			c = 0;
			b++;
			if (b == 10)
			{
				b = 0;
				a++;
			}
		}
		if (a < b && b < c)
		{
			ft_display(a, b, c);
		}
		c++;
	}
}
