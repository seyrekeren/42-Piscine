#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i] == to_find[j] || (to_find[j] == '\0'))
		{
			if (to_find[j] == '\0')
				return (&str[i - j]);
			else
			{
				j++;
				i++;
			}
		}
		i++;
	}
	return (0);
}
