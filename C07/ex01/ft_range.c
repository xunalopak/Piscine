/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchampli <rchampli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 23:58:27 by rchampli          #+#    #+#             */
/*   Updated: 2021/08/23 14:16:03 by rchampli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int	ft_strlen(int *tab)
{
	int	i;

	i = 0;
	while (tab[i])
		i++;
	return (i);
}

int	*ft_range(int	min, int	max)
{
	int	*tab;
	int	i;
	int	len;

	len = max - min;
	i = 0;
	if (len <= 0)
		return (NULL);
	tab = malloc(sizeof(int) * len);
	if (!tab)
		return (NULL);
	while (i < len)
	{
		tab[i] = min;
		min++;
		i++;
	}
	return (tab);
}
