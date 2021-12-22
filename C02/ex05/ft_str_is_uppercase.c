/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkarhan <denizkarhann@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 17:38:46 by dkarhan           #+#    #+#             */
/*   Updated: 2021/10/04 17:38:49 by dkarhan          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	int	size;

	size = 0;
	while (str[size] != '\0')
		size++;
	if (size == 0)
		return (1);
	size = size - 1;
	while (size > 0)
	{
		if (str[size] > 'Z' || str[size] < 'A')
			return (0);
		size--;
	}
	return (1);
}

int	main(void)
{
	ft_str_is_uppercase("SDFLKJJAK3DKJFA");
	return (0);
}
