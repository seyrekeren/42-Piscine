#include <unistd.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb >= 2)
	{
		while (i < nb)
		{
			if (nb % i != 0)
				i++;
			else
				return (0);
		}
		return (1);
	}
	else
		return (0);
}
