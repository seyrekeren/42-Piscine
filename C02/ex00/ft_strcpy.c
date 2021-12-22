/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkarhan <denizkarhann@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 14:11:01 by dkarhan           #+#    #+#             */
/*   Updated: 2021/10/04 15:13:24 by dkarhan          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_strcpy(char *dest, char *src)
{
	int	i;
	int	size;

	i = 0;
	while (src[i] != '\0')
		i++;
	size = i;
	i = 0;
	while (i < size)
	{
		dest[i] = src[i];
		i++;
	}
	i = 0;
	while (i < size)
	{
		write(1, &dest[i], 1);
		i++;
	}
}

int	main(void)
{
	char	dizi1[10];
	char	dizi2[] = "0123456789";	
	ft_strcpy(dizi1, dizi2);
	return (0);
}
