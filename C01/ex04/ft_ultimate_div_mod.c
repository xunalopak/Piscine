/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchampli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 14:46:31 by rchampli          #+#    #+#             */
/*   Updated: 2021/08/05 20:20:16 by rchampli         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int	*a, int	*b)
{
	int	tempa;
	int	tempb;

	tempa = *a / *b;
	tempb = *a % *b;
	*a = tempa;
	*b = tempb;
}
