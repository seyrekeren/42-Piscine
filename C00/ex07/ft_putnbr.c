#include <unistd.h>

void	ft_putchar(char c)
{
	c = c + '0';
	write(1, &c, 1);
}

void	ft_putnbr(int i)
{
	int	y;

	if (i == -2147483648)
	{
		y = i % 10;
		i = i / 10;
		ft_putnbr(i);
		ft_putnbr(-y);
	}
	else if (i < 0)
	{
		write(1, "-", 1);
		ft_putnbr(-1 * i);
	}	
	else if (i < 10)
		ft_putchar(i);
	else
	{
		ft_putnbr(i / 10);
		ft_putnbr(i % 10);
	}
}
