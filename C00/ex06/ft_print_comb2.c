#include <unistd.h>

void	ft_putchar(int i, int j)
{
	char	k;
	char	l;
	char	m;
	char	n;

	k = (i - i % 10) / 10 + '0';
	l = (i % 10) + '0';
	m = (j - j % 10) / 10 + '0';
	n = (j % 10) + '0';
	write(1, &k, 1);
	write(1, &l, 1);
	write(1, " ", 1);
	write(1, &m, 1);
	write(1, &n, 1);
}

void	ft_print_comb2(void)
{
	int		x;
	int		y;

	x = 0;
	while (x <= 98)
	{
		y = x + 1;
		while (y <= 99)
		{	
			ft_putchar(x, y);
			if (x != 98)
				write(1, ", ", 2);
			y++;
		}
		x++;
	}
}
