/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkarhan <denizkarhann@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 16:35:10 by dkarhan           #+#    #+#             */
/*   Updated: 2021/10/04 16:35:12 by dkarhan          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	size;

	size = 0;
	while (str[size] != '\0')
		size++;
	if (size == 0)
		return (1);
	size = size - 1;
	while (size >= 0)
	{
		if (str[size] > '9' || str[size] < '0')
		{
			return (0);
		}
		size--;
	}
	return (1);
}

int	main(void)
{
	char	dizi[];

	dizi = "";
	ft_str_is_numeric(dizi);
	return (0);
}
