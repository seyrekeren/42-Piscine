#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void 	ft_strcapitalize(char	*str)
{
	int i = 0;
	int size = 0;

	while(str[size] != '\0')
	{
		size++;
	}
	while(i < size)
	{
		if(str[i] <= 'Z' && str[i] >= 'A')
		{
			str[i] += 32;
		}
	}

	int temp = 0;
	i = 0;
	while(str[i] != '\0')
	{
		if((str[i] >= 'a' && str[i] <= 'z') && temp == 0)
		{
			str[i] -= 32;
			i++;
		}
		else if((str[i] < '0') || (str[i] > '9' && str[i] < 'A') || (str[i] > 'Z' && str[i] < 'a') || str[i] > 'z' )
		{
			temp = 0;
		}
		else
		{
			temp ++;
		}
		i++;
	}

	i = 0;
	while(i < size)
	{
		ft_putchar(str[i]);
	}
}

int	main(void)
{
	char	dizi[] = "salut, comment tu vas ? 42mots quarante-deux; 54inquante+et+un";
	ft_strcapitalize(dizi);
	return (0);
}
