#include <unistd.h>
#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	size;

	i = 0;
	while (str[i] != '\0')
		i++;

	if (i == 0)
	{
		printf("%d",1);
		return (1);
	}

	size = i;
	i = 0;
	while (i < size)
	{
		if (str[i] <= '9' &&  str[i] >= '0')
		{
			printf("%d",0);
			return (0);
		}
		i++;
	}
	printf("%d",1);
	return (1);
}

int	main(void)
{
	char	dizi[] = "adlşkşkladssiad;
	ft_str_is_alpha(dizi);
	
	return (0);
}
