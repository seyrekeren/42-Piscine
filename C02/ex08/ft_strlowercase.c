#include <unistd.h>

void	ft_putchar(char	c)
{
	write(1, &c, 1);
}

char	*ft_strlowercase(char *str)
{
	int	size;

	size = 0;
	while (str[size] != '\0')
	{
		if(str[size] >= 'A' && str[size] <= 'Z')
		{
			str[size] = str[size] + 32;
		}
		size++;
	}

	return (*&str);
}

int	main(void)
{
	char	x[] = "okafDS41sdaAASIFLKA SKLFASD0 A2sfIlk5-   1kfli sd-*31504*alGKALKSFASLKASDks  dr-r";
	ft_strlowercase(x);
	int	i = 0;
	while (i < 81)
	{
		ft_putchar(x[i]);
		i++;
	}
	return (0);
}
