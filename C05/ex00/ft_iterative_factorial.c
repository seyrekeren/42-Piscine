#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int	factorial;

	factorial = 1;
	if (nb >= 1)
	{
		while (nb != 1)
		{
			factorial *= nb;
			nb--;
		}
		return (factorial);
	}
	return (0);
}
