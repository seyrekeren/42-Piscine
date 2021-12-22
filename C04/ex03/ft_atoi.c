#include <unistd.h>
#include <stdio.h>

int	ft_number(num, temp)
{
	if (temp % 2 == 1)
	{
		return (-1 * num);
	}
	else
		return (num);
}

int	ft_atoi(char *str)
{
	int	i;
	int	eksi;
	int	total;

	i = 0;
	total = 0;
	eksi = 0;
	while (str[i] == ' ' || str[i] >= 9 && str[i] <= 13)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			eksi++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		total = str[i] - 48 + total * 10;
		i++;
		if (str[i] < '0' || str[i] > '9' || str[i] == '\0')
			return (ft_number(total, eksi));
	}
	return (0);
}

int	main(void)
{
	int	a;

	a = ft_atoi("  --++--++--+-+-++-+-+---3210das");
	printf("%d", a);
	return (0);
}
