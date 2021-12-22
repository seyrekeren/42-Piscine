#include <unistd.h>

int	ft_sqrt(int nb)
{
	int	i;

	if (nb < 0)
		return (0);
	i = 0;
	while (i * i != nb)
		i++;
	return (i);
}
