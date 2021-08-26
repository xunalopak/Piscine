/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchampli <rchampli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 04:56:15 by rchampli          #+#    #+#             */
/*   Updated: 2021/08/19 05:03:30 by rchampli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int	ft_sign(char *str)
{
	int	i;
	int	sign;

	i = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	return (sign);
}

char	*ft_pointer_to_char(char *str, char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
	{
		i++;
		str++;
	}
	while (str[i] == '+' || str[i] == '-')
	{
		i++;
		str++;
	}
	while (base[j])
	{
		if (str[i] == base[j])
		{
			return (str);
			j++;
		}
	}
	return (NULL);
}

int	ft_strlen_or_pow(char *str, int nb, int pow, int i)
{
	int	len_or_pow;

	len_or_pow = 0;
	len_or_pow = nb;
	if (i == 0)
	{
		while (str[len_or_pow] != '\0')
			len_or_pow++;
	}
	if (i == 1)
	{
		while (pow > 1)
		{
			len_or_pow *= nb;
			pow--;
		}
	}
	return (len_or_pow);
}

int	ft_is_valid(char *base, int size)
{
	int	i;
	int	j;

	i = -1;
	if (size < 2)
		return (0);
	while (i++ < size - 1)
	{
		j = i + 1;
		while (j++ < size)
		{
			if (base[i] == base[j])
				return (0);
		}
	}
	i = 0;
	while (base[i] != '\0')
	{
		if ((base[i] >= 9 && base[i] <= 13) || base[i] == ' '
			|| base[i] == '-' || base[i] == '+')
			return (0);
		i++;
	}
	return (1);
}

int	ft_atoi_base(char *str, char *base)
{
	int		len;
	int		sign;
	char	*str_atoi;
	int		int_atoi;
	int		i;
	int		j;

	len = ft_strlen(base, 0, 0, 0);
	sign = ft_sign(str);
	i = 0;
	int_atoi = 0;
	str_atoi = ft_pointer_to_char(str, base);
	if (!str_atoi || !ft_is_valid(base, len))
		return (0);
	while (str_atoi[i])
	{
		while (base[j])
		{
			if (str_atoi[i] == base[j])
			{
				int_atoi += j * ft_strlen_or_pow("zgeg", len, i, 1);
			}
		}
	}
	return (int_atoi * sign);
}
int	main(void)
{
	printf("%d", ft_sign("      \n\v---++"));
	return (0);
}
