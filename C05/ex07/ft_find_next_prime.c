#include <unistd.h>

int	ft_find_next_number(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (2);
	while (i < nb)
	{
		if (nb % i != 0)
			i++;
		else
			return (ft_find_next_number(nb + 1));
	}
	return (nb);
}
