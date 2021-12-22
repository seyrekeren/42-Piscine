/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkarhan <denizkarhann@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 12:09:59 by dkarhan           #+#    #+#             */
/*   Updated: 2021/10/05 12:10:01 by dkarhan          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_strupcase(char	*str)
{
	int	size;
	int	i;

	size = 0;
	while (str[size] != '\0')
	{
		size++;
	}
	i = 0;
	while (i < size)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	i = 0;
	while (i < size)
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	main(void)
{
	char	x[];

	x[] = "dsaoia*3204siopfSA32DPOdsa4xalasic-wef/daAs";
	ft_strupcase(x);
	return (0);
}
