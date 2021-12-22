#include <unistd.h>

void ft_strncpy(char *dest, char*src, unsigned int n)
{
	int	j = 0;

	while (j <= n)
	{
		dest[j] = src[j];
		j++;
	}

	if(dest[j] != '\0')
		dest[j] = '\0';
	j = 0;
	
	while(j <= n)
	{
		write(1, &dest[j], 1);
		j++;
	}
	write(1, &dest[10], 2);
}

int	main()
{
	char 	dizi1[30] = "11111111111111111", dizi2[] = "0123456789";
	int	i = 0;

	while (dizi2[i] != '\0')
		i++;

	ft_strncpy(dizi1, dizi2, 6);


	return (0);
}
