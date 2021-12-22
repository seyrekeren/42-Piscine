#include <unistd.h>

int	ft_recursive_factorial(int nb)
{
	int	factorial;

	if (nb == 0)
		return (1);
	else if (nb >= 1)
	{
		nb *= ft_recursive_factorial(nb - 1);
		return (nb);
	}
	return (0);
}
