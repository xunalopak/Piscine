/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchampli <rchampli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 11:32:09 by rchampli          #+#    #+#             */
/*   Updated: 2021/08/15 21:11:21 by rchampli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
}

unsigned	int	ft_strlcat(char	*dest, char	*src, unsigned	int	size)
{
	int	dest_len;
	unsigned int	i;

	dest_len = ft_strlen(dest);
	i = 0;
	while (src[i] != '\0' && i < size - 1)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[size] = '\0';
	return (*src);
}

#include <string.h>
#include <stdio.h>
int main()
{
	char dest[100] = "votez vducoulo";
	char dest1[100] = "votez vducoulo";
	char str[]  = "au megatron (et Jmilhas aussi)";
	long size = 15;
	printf("%lu\n",strlcat(dest, str, size));
	printf("origine =========>  %s\n", dest);
	printf("%d\n",ft_strlcat(dest1, str, size));
	printf("MyFunc  =========>  %s\n", dest1);

	return (0);
}
