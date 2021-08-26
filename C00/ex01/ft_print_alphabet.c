/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchampli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 12:07:07 by rchampli          #+#    #+#             */
/*   Updated: 2021/08/04 14:59:20 by rchampli         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_print_alphabet(void);

void	ft_print_alphabet(void)
{
	int	i;

	i = 97;
	while (i != 123)
	{
		write(1, &i, 1);
		i++;
	}
}
