#include <unistd.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	number;

	i = 0;
	number = 1;
	if (nb == 0 && power == 0)
		return (1);
	else if (nb >= 0)
	{
		while (i < power)
		{
			number *= nb;
			i++;
		}
		return (number);
	}
	return (0);
}
