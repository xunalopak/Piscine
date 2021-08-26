/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchampli <rchampli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 04:24:54 by rchampli          #+#    #+#             */
/*   Updated: 2021/08/17 23:02:12 by rchampli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	stock;

	i = 1;
	stock = nb;
	if (power < 0)
		return (0);
	if (power == 0)
	{
		return (1);
	}
	while (i < power)
	{
		stock = stock * nb;
		i++;
	}
	return (stock);
}
