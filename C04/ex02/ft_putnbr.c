#include <unistd.h>

void	ft_putchar(char c)
{
	c = c + '0';
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int	x;

	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else if (nb < 0)
	{
		write(1, "-", 1);
		ft_putnbr(-1 * nb);
	}
	else if (nb < 10)
	{
		ft_putchar(nb);
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}
