/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkarhan <denizkarhann@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 17:29:35 by dkarhan           #+#    #+#             */
/*   Updated: 2021/10/04 17:38:11 by dkarhan          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_lowercase(char *str)
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
		if (str[size] > 'z' || str[size] < 'a')
			return (0);
		size--;
	}
	return (1);
}

int	main(void)
{
	ft_str_is_lowercase("sadsalşdka4sdkl");
	return (0);
}
