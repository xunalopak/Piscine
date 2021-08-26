/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchampli <rchampli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 05:23:00 by rchampli          #+#    #+#             */
/*   Updated: 2021/08/22 14:07:33 by rchampli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	ft_strcmp(unsigned char *s1, unsigned char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_sort_int_tab(char **tab, int size)
{
	int		i;
	int		j;
	char	*temp;

	j = 1;
	while (j < size - 1)
	{
		i = 0;
		while (i < size - 1 )
		{
			if (ft_strcmp(tab[i], tab[i + 1]) > 0)
			{
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
			}
			i++;
		}
		j++;
	}
}

int	main(int argc, char **argv)
{
	int	c;

	c = 1;
	if (argc > 1)
	{
		ft_sort_int_tab(argv, argc);
		while (c != (argc))
		{
			ft_putstr(argv[c]);
			write(1, "\n", 1);
			c++;
		}
	}
	return (0);
}
